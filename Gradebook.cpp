#include <iostream>
#include "Gradebook.h"

using namespace std;

ostream& operator<<(ostream& os, const Gradebook& gr) {
	for (map<string, int>::const_iterator it = gr.exam.begin(); it != gr.exam.end(); it++) {
		os << '\n' << it->first << ' ' << it->second << ' ';
	}
	return os;
}

istream& operator>> (istream& in, Gradebook& gr) {
	gr.exam.clear();
	string examName;
	int examResult = -1;

	for (; in >> examName, in >> examResult;) {
		gr.exam.insert(
			make_pair(examName, examResult)
		);
	}
}