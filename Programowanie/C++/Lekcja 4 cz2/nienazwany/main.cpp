#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    cout << "Witaj w lozowaniu! Za 3 sekundy nastapi zwolnienie blokady" << endl;
    Sleep(3000);
    srand(time(NULL));

    for(int i=1; i<=6; i++){
        Sleep(1000);
        liczba = rand()%49+1;
        cout << liczba << "\a" << endl;
    }
    return 0;
}
