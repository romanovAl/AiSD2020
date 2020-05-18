#pragma once
#include "Subject.h"
using namespace std;

class Exam : public Subject {

private:
	int mark;
	string date;
public:
	Exam(string name, int mark, string date) {
		this->name = name;
		this->mark = mark;
		this->date = date;
	}
	Exam() {}

	string getType(){
		return "İêçàìåí";
	}

	friend bool operator== (const Exam& first, const Exam& second) {
		if (first.name != second.name
			|| first.date != second.date
			|| first.mark != second.mark) return false;
		return true;
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