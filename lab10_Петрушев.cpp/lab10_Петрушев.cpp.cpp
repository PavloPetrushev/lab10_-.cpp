// lab10_Петрушев.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

struct Student {
    string surname;
    double avgGrade;
    int id;
};

int main() {
    SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    const int maxStudents = 100; 
    Student students[maxStudents]; 
    int numStudents; 

    cout << "Введіть кількість студентів у групі: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        cout << "Введіть прізвище студента " << i + 1 << ": ";
        cin >> students[i].surname;
        cout << "Введіть середній бал студента " << i + 1 << ": ";
        cin >> students[i].avgGrade;
        students[i].id = i + 1; 
    }

    cout << "\nІнформація про всіх студентів:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Прізвище: " << students[i].surname << ", Середній бал: " << students[i].avgGrade << ", Порядковий номер: " << students[i].id << endl;
    }

    const double scholarshipGrade = 4.5; 
    cout << "\nПрізвища студентів, які отримуватимуть стипендію:" << endl;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].avgGrade >= scholarshipGrade) {
            cout << students[i].surname << endl;
        }
    }

    return 0;
}