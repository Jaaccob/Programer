#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int const n=10;
    int *array_end = new int [n];
    int array_start[n];
    srand(time(NULL));

    for(int i=0; i<n; i++){                                         //Przypisanie wartości
        array_end[i]=rand()%8+1;
        array_start[i]=rand()%8+1;
    }
    cout << "Tablica array_start: " << endl;
    for(int i=0; i<n; i++){                                         //Wypisanie wartości array_start
        cout << array_start[i] << ",";
    }
    cout << endl << "Tablica array_end: " << endl;
    for(int i=0; i<n; i++){                                         //Wypisanie wartości array_end
        cout << array_end[i] << ",";
    }
    cout << endl << endl;

    for(int i=0; i<n; i++){                                         //Liczenie 10 z dwoch tablic
        for(int j=0; j<n; j++){
            if(array_start[i]+array_end[j]==10) {
                array_end[j] = array_start[i]+array_end[j];
                break;
            }
        }
    }
    cout << endl << "Tablica array_end: " << endl;
    for(int i=0; i<n; i++){                                         //Wypisanie wartości array_end
        cout << array_end[i] << ",";
    }
    cout << endl << endl;

    int *tymcz = new int [n];
    int licznik=0;
    int zmienna=0;

    for(int i=0; i<n; i++){
            if(array_end[i]==10) {
                licznik++;
            }
            else if(array_end[i]!=10){
                tymcz[zmienna]=array_end[i];
                array_end[zmienna]=array_end[i];
                zmienna++;
            }
    }
    cout << endl << endl << licznik << " <-- Licznik " << endl;

    cout << "Tablica array_end: " << endl;
    for(int i=0; i<(n-licznik); i++){
        cout << array_end[i] << ",";
    }

    //delete [] array_end;
    //int *array_end = new int [n-licznik];


    return 0;
}
