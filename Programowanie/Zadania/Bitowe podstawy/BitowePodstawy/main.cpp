#include <iostream>
#include <windows.h>

using namespace std;

void Program1();
void Program2();
void Program3();
void dwojkowy(int n){
    if(n>0){
        dwojkowy(n/2);
        cout << n%2;
    }
}
void Program4();
void Program5();
void Program6();

int main()
{
    int wybor=1;
    while (wybor!=0) {
        system("cls");
        cout << "Zadanie 1." << endl << "Zadanie 2." << endl << "Zadanie 3." << endl << "Zadanie 4." << endl << "Zadanie 5." << endl << "Zadanie 6." << endl;
        cout << "\n\nPodaj nr zadania: ";
        cin >>  wybor;

        switch (wybor) {
        case 1: Program1(); break;
        case 2: Program2(); break;
        case 3: Program3(); break;
        case 4: Program4(); break;
        case 5: Program5(); break;
        case 6: Program6(); break;
        case 0: break;
        default: cout << "Brak takiego zadania. Podaj poprawny nr zadania!!!" << endl; break;
        }
    }
    return 0;
}
void Program1(){
    system("cls");
    cout << "Podaj swoja liczbe: ";
    int liczba; cin >> liczba;
    int maska = 1;
    if(liczba&maska==1) cout << "Twoja liczba jest nieparzysta";
    else cout << "Twoja liczba jest parzysta";
    getchar();getchar();
}
void Program2(){
    system("cls");
    cout << "Podaj swoja liczbe: ";
    int liczba; cin >> liczba;
    if(liczba&(liczba-1)) cout << "0 - nie";
    else cout << "1 - tak";
    getchar();getchar();
}
void Program3(){
    system("cls");
    cout << "Podaj swoja liczbe: ";
    int liczba; cin >> liczba;
    getchar();

    cout <<"\n\nTwoja liczba w systemie dwojkowym wyglada tak: ";
    dwojkowy(liczba);

    int maska = 1;
    liczba = (liczba&~(maska<<0));
    liczba = (liczba&~(maska<<1));

    cout << "\n\nTwoja liczba to: " << liczba << endl;
    cout << "W systemie dwojkowym: ";
    dwojkowy(liczba);

    getchar();getchar();
}
void Program4(){
   cout << "Podaj swoja liczbe: ";
   int liczba; cin >> liczba;

   cout << "Twoja liczba w systemie dwojkowym wyglada tak: ";
   dwojkowy(liczba);

   int maska=1;
   liczba=(liczba|(maska<<6));
   liczba=(liczba|(maska<<7));

   cout << "\n\nTwoja liczba wynosi teraz: " << liczba << endl << "W systemie dwojkowym wyglada: ";
   dwojkowy(liczba);

   getchar();getchar();
}
void Program5(){
    system("cls");
    cout << "Podaj swoja liczbe: ";
    int liczba; cin >> liczba;
    int maska = 129;
    cout << "W systemie dwojkowym twoja liczba wynosi: ";
    dwojkowy(liczba);
    liczba=liczba^maska;

    cout << "\n\nTwoja liczba wynosi: " << liczba << endl << "W systemie dwojkowym: ";
    dwojkowy(liczba);
    getchar();getchar();

}
void Program6(){
}
