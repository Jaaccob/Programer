#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Podaj PIN:";
    cin >> PIN;

    if(PIN=="1729"){
        cout << "Poprawny PIN";
    }
    else{
        cout << "Nie poprawny PIN";
    }
    return 0;
}
