#include <iostream>
#include <string>
#include "Group.h"
#include <vector>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string groupName;
    vector<string> fio(3);

    vector<string> examsName(2);
    vector<vector<int>> examsResults(fio.size(), vector<int>(examsName.size()));

    groupName = "first";
    fio[0] = "first fio";
    fio[1] = "second fio";
    examsName[0] = "math";
    examsName[1] = "algebra";
    examsResults[0][0] = 1;
    examsResults[0][1] = 2;
    examsResults[1][0] = 11;
    examsResults[1][1] = 22;
    vector<int>resExam(sizeof(examsName));

    resExam[0] = 111;
    resExam[1] = 222;

    Group first(groupName, fio, examsName, examsResults);
    first.addGradeBook("athird, rexExam");  

    cout << first.getGradebook("athird");
    cin >> first.getGradebook("athird");
    cout << first.getGradebook("athird");
    cout << first.getGradebook("");

    system("PAUSE");

    return 0;
}