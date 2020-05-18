#pragma once
#include <iostream>
#include <vector>
#include<map>
#include <string>
#include "Gradebook.h"
#include "Subject.h"
#include "Zachet.h"

using namespace std;

class Group {
private:
	string name;
	map<string, Gradebook> gradebooksVector;
	vector<string> examsNamesVector;

	const static std::map<int, std::string> subjectPlane;

public:
	Group() {}

	Group(string name, vector<string> namesVector, vector<string> examsNamesVector, vector<vector<int>> examsResultsVector) {
		this->name = name;
		this->examsNamesVector = namesVector;
		for (size_t i = 0; i < namesVector.size(); i++) {

			gradebooksVector.insert(
				make_pair(
					namesVector[i], Gradebook(namesVector, examsResultsVector[i])
				)
			);
		}
	}

	Group(string groupName, map<string, Gradebook> gradebooksVector) {
		this->name = groupName;
		this->gradebooksVector = gradebooksVector;
	}

	~Group() {

	}

	void deleteGradebook(string fio) {
		gradebooksVector.erase(gradebooksVector.find(fio));
	}

	void addGradeBook(string fio, vector<int> resultExam) {
		gradebooksVector.insert(
			make_pair(fio, Gradebook(examsNamesVector, resultExam))
		);
	}

	void addGradeBook(string fio) {
		gradebooksVector.insert(
			make_pair(fio, Gradebook())
		);
	}

	void operator+(Group& G) {
		for (auto cur = G.gradebooksVector.begin(); cur != G.gradebooksVector.end(); ++cur) {
			this->gradebooksVector.insert(
				make_pair(cur->first, cur->second)
			);
		}
	}

	void operator-(Group& G) {
		for (auto cur = G.gradebooksVector.begin(); cur != G.gradebooksVector.end(); ++cur) {
			this->gradebooksVector.erase(cur->first);
		}
	}
	Gradebook& getGradebook(string key) {
		return gradebooksVector[key];
	}
};


