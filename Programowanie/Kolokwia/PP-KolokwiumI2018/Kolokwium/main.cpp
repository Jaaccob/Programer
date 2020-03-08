#include <iostream>
#include <windows.h>
#define Pi 3.14
using namespace std;

void zadanie1(){
    system("cls");
    int r=0;
    int h=0;
    while(r<=0 || h<=0){
    cout << "Podaj promien kola u podstawy stozka: "; cin >> r;
    cout << "Podaj wysokosc stozka: "; cin >> h;
    if(r<=0||h<=0) cout << "Bledne dane"; system("cls");
    }
    float v =(Pi*(r*r)*h)/3;
    cout << "Objetosc stozka wynosi: "<< v << endl;
    system("pause");
    system("cls");
}
void zadanie3(){
    float tab1={2.4,2.8,3.8,1.9,};
}
void zadanie4(){

}




int main()
{
    int wybor=1;

    while(wybor!=0){
        cout << "---------------------------------------------------------------------------------"<<endl;
        cout << "Zadanie 1. Objestosc stozka" << endl;
        cout << "Zadanie 2." << endl; // wskazniki
        cout << "Zadanie 3." << endl;
        cout << "Zadanie 4." << endl;
        cout << "Zadanie 5." << endl;
        cout << "---------------------------------------------------------------------------------"<<endl;

        cout << "\n\nKtory program chcesz uruchomic: "; cin >> wybor;

        switch (wybor) {
        case 1: zadanie1(); break;
        case 2: break;
        case 3: zadanie3(); break;
        case 4: break;
        case 5: break;
        }
    }
    return 0;
}
