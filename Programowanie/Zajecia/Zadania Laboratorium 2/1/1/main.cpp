#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj dwie liczby: " << endl;
    double a,b,c;
    cout << "Podaj pierwsza liczbe: "; cin >> a;
    cout << "Podaj druga liczbe: "; cin >> b;

    cout << "A ma wartość: " << a << endl;
    cout << "B ma wartość: " << b << endl;
    c=a;
    a=b;
    b=c;
    cout << "A teraz ma wartość: " << a << endl;
    cout << "B teraz ma wartość: " << b << endl;


    return 0;
}
