#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cmath>
#include <time.h>

using namespace std;

double BMI(double m ,double h){
    double bmi=m/(h*h);
    return bmi;
}
double odleglosc(int x1, int y1, int x2, int y2){
    double odlx = pow(x2-x1,2);
    double odly = pow(y2-y1,2);

    return pow(odlx+odly,1/2);
}
int rekurencja(int n);
int wymyslliczbe2(int n);
int potegowanie(int a,int b);
void zadaniepierwsze(){
    system("cls");

    cout << "Czesc, sprawdze twoje BMI. Podaj mi swoj wzrost(w m): "; double h; cin >> h;
    cout << "Podaj mi ile wazysz: "; double m; cin >> m;
    double bmi = BMI(m,h);
    cout << "\nTwoje BMI wynosi: " << bmi << endl;
    if(bmi<=18.5) cout << "niedowaga\n";
    else if(bmi > 18.5 && bmi <= 25) cout << "prawidlowa waga\n";
    else if(bmi > 25 && bmi <= 30) cout << "lekka nadwaga\n";
    else cout << "nadwaga\n";

    system("pause");
    system("cls");
}
void zadaniedrugie(){
    system("cls");

    cout << "Czesc, podaj wspolrzedne swoich pkt" << endl;
    cout << "Pkt 1: x1: "; int x1; cin >> x1; cout << "y1: "; int y1; cin >> y1;
    cout << "Pkt 2: x2: "; int x2; cin >> x2; cout << "y2: "; int y2; cin >> y2;
    cout << "Pkt 3: x3: "; int x3; cin >> x3; cout << "y3: "; int y3; cin >> y3;
    double odl1,odl2,odl3;
    odl1=odleglosc(x1,y1,x2,y2);
    odl2=odleglosc(x2,y2,x3,y3);
    odl3=odleglosc(x3,y3,x1,y1);

    double max=odl1,min=odl1;
    if(max<odl2) max=odl2;
    if(max<odl3) max=odl3;
    if(max>odl2) min=odl2;
    if(min>odl3) min=odl3;

    cout << "Stosunek dlugosci bokow najdluzszego do najkrotszego wynosi: " << min << " do " << max << endl;
    system("pause");
    system("cls");
}
void zadanietrzecie(){
    system("cls");
    cout << "Podaj n: "; int n; cin >> n;
    cout << rekurencja(n) << endl;
    system("pause");
    system("cls");
}
void zadanieczwarte(){
    system("cls");
    cout << "Podaj liczbe n: "; int n; cin >> n;
    cout << "\n\nWymyslona liczba wynosi: " << wymyslliczbe2(n) << endl;
    system("pause");
    system("cls");


}


int main()
{
    int wybor=1;
    while (wybor!=0) {
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Zadanie 1. BMI" << endl;
    cout << "Zadanie 2. Trojkat" << endl;
    cout << "Zadanie 3. Rekurencja" << endl;
    cout << "Zadanie 4. Tabela" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;

    cout << "\n\nCzesc, ktore zadanie chcesz wybrac ?? Wybierz numer: "; cin >> wybor;
    switch(wybor){
    case 1: {zadaniepierwsze(); break;}
    case 2: {zadaniedrugie(); break;}
    case 3: {zadanietrzecie(); break;}
    case 4: {zadanieczwarte(); break;}
    }
    }
    system("cls");

    return 0;
}
int rekurencja(int n){
    if (n<6) return n;
    else return rekurencja(n-2)+rekurencja(n-4)+rekurencja(n-6);
}
int potegowanie(int a,int b){
    int c=1;
    for(int i=1;i<b;i++){
        c=a*a;
    }
    return c;
}
int wymyslliczbe2(int n){
    srand(time(NULL));
    int tab1[n];
    for(int i=0;i<n;i++){
        tab1[i]=rand()%2;
    }
    for(int i=0;i<n;i++){
        cout << tab1[i] << ",";
    }
    cout << "\n\n";
    int liczba=0,j=0;
    for(int i=n-1; i>=0;i--){
        liczba=liczba+potegowanie(tab1[i]*2,j);
        j++;
    }
    return liczba;
}
