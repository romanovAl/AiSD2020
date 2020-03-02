#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Exam.h"

using namespace std;

class StudentWithVector {
private:
    string name;
    vector <Exam> examsVector;

public:
    StudentWithVector() {}

    StudentWithVector(string newName, vector<Exam> newExamsVector) { //Конструктор 
        name = newName;
        examsVector = newExamsVector;
    };

    StudentWithVector(string newName) {
        name = newName;
    }

    //Получение данных 
    string getName() {
        return name;
    }
    vector <Exam> getExams() {
        return examsVector;
    }

    //Изменение данных
    void setName(string newName) {
        name = newName;
    }
    void setExams(vector<Exam> newExams) {
        examsVector = newExams;
    }

    //Метод для добавления экземпляра экзамена 
    void addExam(Exam newExam) {
        examsVector.push_back(newExam);
    }

    void toString1() { //Вывод данных отдельного студента
        cout << "Имя студента - " << name << endl;
        for (int i = 0; i < examsVector.size(); i++) {
            Exam curEx = examsVector[i];
            cout << " | " << curEx.getName() << "| " << curEx.getDate() << " | " << curEx.getMark() << endl;
        }
    }
};