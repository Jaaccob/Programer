#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main()
{
    //4. Napisz program w języku C++, który przyjmuje dwie liczby całkowite, a następnie wyświetli iloraz tych liczb.
    /*

    int a,b,c;
    cout << "Podaj pierwsza liczbe: "; cin >> a;
    cout << "Podaj druga liczbe: "; cin >> b;
    c=a*b;
    cout << "Iloraz tych liczb wynosi: "<< c << endl;

    */
    //5. Oblicz długość przeciw prostokątnej trójkąta dla długości przyprostokątnych wprowadzonych przez użytkownika. Zakładamy, że wprowadzane wartości będą liczbami całkowitymi.
    //Skorzystaj z metody sqrt() i pow() z biblioteki <cmath>.
    /*

    double boka,bokb,bokc;
    cout << "Podaj pierwsza liczbe: "; cin >> boka;
    cout << "Podaj druga liczbe: "; cin >> bokb;
    bokc=sqrt(pow(boka,2)+pow(bokb,2));
    cout << "Przeciwprostokatna wynosi: " << bokc << endl;

    */
    //6. Napisz program w języku C++, który obliczy pole sześciokąta foremnego. Program powinien wczytać długości boku od użytkownika, a następnie wyświetlić wynik.
    /*

    float a,b;
    cout << "Podaj bok szesciokata foremnego: "; cin >> a;
    b=(3*(pow(a,2)*sqrt(3)))/2;
    cout << b << endl;

    */
    //7.Napisz program w języku C++, który policzy odległość pomiędzy dwoma punktami. Program powinien pobierać pary liczb określające współrzędne x i y kolejnych wierzchołków.
    /*

    double x1,y1,x2,y2;
    cout << "Podaj współrzedne pierwszego pkt: "; cin >> x1 >> y1;
    cout << "Podaj współrzedne drugiego pkt: "; cin >> x2 >> y2;
    double wynik;
    wynik = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout << "Odleglosc pomiedzy twoimi punktami wynosi: " << wynik;

    */
    //8. Napisz program w języku C++, który wczyta od użytkownika dwie liczby całkowite i zwiększy ich wartość o jeden.
    //Następnie program powinien wypisać iloczyn tych liczb zmniejszony o jeden.
    /*

    int a,b,c;
    cout << "Podaj pierwsza liczbe: "; cin >> a;
    cout << "Podaj druga liczbe: "; cin >> b;
    a++;
    b++;
    c=(a*b)-1;
    cout << "Iloczyn twoich liczb zwiekszonych o 1 wynosi: " << c << endl;

    */
    //9. Napisz program w języku C++, który stworzy i zainicjuje dwie liczby zmiennoprzecinkowe następującymi wartościami: 1/10, 1-9/10.
    //Następnie program powinien porównać ich wartości.

    return 0;
}
