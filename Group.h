#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "StudentWithVector.h"

using namespace std;

class Group {
private:
	string name;
	vector <StudentWithVector> students;

public:
	Group() {}

	Group(string name, vector <StudentWithVector> students) {
		this->name = name;
		this->students = students;
	}

	Group(string name) {
		this->name = name;
	}

	void setName(string name) {
		this->name = name;
	}
	void setStudents(vector<StudentWithVector> students) {
		this->students = students;
	}
	void addStudent(StudentWithVector student) {
		students.push_back(student);
	}
	void deleteStudent(StudentWithVector student) {
		string name = student.getName();
		for (int i = 0; i < students.size(); i++) {
			StudentWithVector curStudent = students[i];
			if (curStudent.getName() == name) {
				students.erase(students.begin() + i);
			}
		}
	}

	string getName() {
		return name;
	}
	vector<StudentWithVector> getStudentsList() {
		return students;
	}

	StudentWithVector findStudent(string name) {
		for (int i = 0; i < students.size(); i++) {
			StudentWithVector curStudent = students[i];
			if (curStudent.getName() == name) return curStudent;
		}
	}

	void toString1() {
		cout << "Группа - " << name << endl;

		for (int i = 0; i < students.size(); i++) {
			StudentWithVector curStudent = students[i];

			cout << endl << "Предмет" << " | " << "Оценка" << " | " << "Дата" << endl;

			curStudent.toString1();

		}
	}
};
