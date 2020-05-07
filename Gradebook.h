#pragma once
#include "Exam.h"
#include <map>
#include<vector>


using namespace std;

class Gradebook {
private:
	map<string, int> exam;

public:
	Gradebook() {}

	Gradebook(vector<string> examsNamesVector, vector<int> examsResultsVector) {

		for (size_t i = 0; i < examsNamesVector.size(); i++) {

			exam.insert(
				make_pair(examsNamesVector[i], examsResultsVector[i])
			);

		}

	}

	friend ostream& operator<<(std::ostream& os, const Gradebook& gr);
	friend istream& operator>>(std::istream& in, Gradebook& gr);
};
