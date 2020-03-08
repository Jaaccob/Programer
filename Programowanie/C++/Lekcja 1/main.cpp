#include <iostream>

using namespace std;

int uczniowie, cukierki,x,y;

int main()
{
    cout << "Ile jest uczniow w Twojej klasie: ";
    cin >> uczniowie;

    cout << "Ile mama kupila cukierkow: ";
    cin >> cukierki;
    cout << endl;

    x=cukierki/(uczniowie-1);
    cout << "Cukierki dla kazdego ucznia w klasie: " << x;
    cout << endl;

    y=cukierki-x*(uczniowie-1);
    cout << "Cukierki dla Jasia na wieczor:" << y;

    return 0;
}
