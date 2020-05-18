#pragma once
#include"Subject.h"
using namespace std;

class Zachet : public Subject {
private:
	bool mark;
	string date;
public:
	Zachet() {}

	Zachet(string name, bool mark, string date) {
		this->name = name;
		this->mark = mark;
		this->date = date;
	}

	string getType() {
		return "зачет";
	}

	string getName() {
		return name;
	}
	bool getMark() {
		return mark;
	}
	string getDate() {
		return date;
	}
	void setName(string name) {
		this->name = name;
	}
	void setMark(bool mark) {
		this->mark = mark;
	}
	void setDate(string date) {
		this->date = date;
	}
};