#pragma once
#include <iostream>
#include <map>
using namespace std;

class Subject {
private:
	string lecturerName;
	string practitionerName;
	
	int count;

public:
	string name;
	static map<int, string> subjectPlane;

	map<int,string> getSubjectPlane() {
		return subjectPlane;
	}

	virtual string getType() = 0;

	Subject(string name) {
		this->name = name;
		subjectPlane.insert(
			make_pair(count, name)
		);
		count++; 
	}

	Subject() {}
	void setSubjName(string name) {
		this->name = name;
	}

	void setLecturerName(string name) {
		this->lecturerName = name;
	}

	void setPractitionerName(string name) {
		this->practitionerName = name;
	}

	string getLecturerName() {
		return lecturerName;
	}

	string getPractitionerName() {
		return practitionerName;
	}

	
};