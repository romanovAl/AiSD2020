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

	Group(string newName, vector <StudentWithVector> newStudents) {
		name = newName;
		students = newStudents;
	}

	Group(string newName) {
		name = newName;
	}

	void setName(string newName) {
		name = newName;
	}
	void setStudents(vector<StudentWithVector> newStudents) {
		students = newStudents;
	}
	void addStudent(StudentWithVector newStudent) {
		students.push_back(newStudent);
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
