#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(char *imi,string nazw, double *arr, double sre){
    imi="Brak";
    nazw="Brak";
    arr= new double [9];
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    arr[4]=1;
    arr[5]=1;
    arr[6]=1;
    arr[7]=1;
    arr[8]=1;
    imie=imi;
    nazwisko=nazw;
    array=arr;
    for(int i=0; i<9; i++){
        sre=sre+array[i];
    }
    sre=sre/9;
    srednia=sre;
}
void Student::show(){
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Oceny: ";
    for(int i=0; i<9; i++){
        cout << array[i] << ",";
    }
    cout << endl << "Srednia ocen: " << srednia << endl;
}
