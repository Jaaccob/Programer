#include <iostream>

using namespace std;

class Student{
    char *imie;
    string nazwisko;
    double *array;
    double srednia;

public:
    Student(char *im="brak", string naz="brak", double *arr=nullptr, double sre = 0);

    void show();
};
