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

	Exam(string name, int mark, string date) {
		this->name = name;
		this->mark = mark;
		this->date = date;
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
	void setName(string name) {
		this->name = name;
	}
	void setMark(int mark) {
		this->mark = mark;
	}
	void setDate(string date) {
		this->date = date;
	}
};
