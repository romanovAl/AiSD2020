#pragma once
#include <iostream>
using namespace std;

class Exam {
private:
    string name;
    int mark;
    string date;

public:

    Exam() {}

    Exam(string newName, int newMark, string newDate) {
        name = newName;
        mark = newMark;
        date = newDate;
    }

    string getName() {
        return name;
    }
    int getMark() {
        return mark;
    }
    string getDate() {
        return date;
    }
    void setName(string newName) {
        name = newName;
    }
    void setMark(int newMark) {
        mark = newMark;
    }
    void setDate(string newDate) {
        date = newDate;
    }
};
