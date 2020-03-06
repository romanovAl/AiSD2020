#include <iostream>
#include <string>
#include "Group.h"
#include <vector>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    Exam matan("Матанализ", 3, "13.01.2020");
    Exam algem("Алгебра и геометрия", 5, "20.01.2020");
    Exam OP("Оп", 5, "24.01.2020");


    StudentWithVector alex("Александр Романов");
    alex.addExam(matan);
    alex.addExam(algem);
    alex.addExam(OP);

    StudentWithVector marina("Марина Бетехтина");
    marina.addExam(matan);
    marina.addExam(algem);
    marina.addExam(OP);

    StudentWithVector usman("Усман Хаммидуллин");
    usman.addExam(matan);
    usman.addExam(algem);
    usman.addExam(OP);

    StudentWithVector alina("Алина Ушакова");
    alina.addExam(matan);
    alina.addExam(algem);
    alina.addExam(OP);

    Group pm("Прикладная математика");

    pm.addStudent(alex);
    pm.addStudent(marina);
    pm.addStudent(usman);
    pm.addStudent(alina);

    pm.toString1();

    pm.deleteStudent(marina); //Удаляем студента из группы

    cout << endl << " --------------------- Группа после удаления ----------------------" << endl;

    pm.toString1();

    StudentWithVector stud = pm.findStudent(alex.getName());

    cout << endl << "Ищем студента ..." << endl;
    stud.toString1();

    return 0;
}