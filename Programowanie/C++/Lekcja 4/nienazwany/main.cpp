#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe 1...100" << endl;
    srand(time(NULL));
    int liczba=rand()%100+1;
    liczba=rand()%100+1;

    int strzal=0,ile_prob=0;

    while (strzal!=liczba) {
        ile_prob++;
        cout << "Zgadnij jaka (to Twoja " << ile_prob << " proba";
        cin >> strzal;
        if(strzal==liczba) {cout << "Udalo sie! Wygrywasz w " << ile_prob << " probie" << endl;}
        else if(strzal<=liczba) {cout << "To za malo" << endl;}
        else if(strzal>=liczba) {cout <<"To za duzo" << endl;}
    }


    system("pause");
    return 0;
}
