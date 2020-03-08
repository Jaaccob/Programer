#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void zad3();
void zad3_1(int *tab1[],int rozmiar,int *tab2);
void zad2();
void zad2(int *matrix);




int main()
{
    int wybor=1;
    while (wybor!=0) {
        system("cls");
        cout << "Zad1" << endl << "Zad1" << endl << "Zad1" << endl << "Zad1" << endl << "Zad1" << endl << "Zad1" << endl << "Zad1" << endl;
        cin >> wybor;
        switch (wybor) {
        case 1: break;
        case 2: zad2(); break;
        case 3: zad3(); break;
        }
    }

    return 0;
}
void zad3(){
    system("cls");
    cout << "Podaj jaki ma miec rozmiar tablica: ";
    int rozmiar; cin >> rozmiar;
    srand(time(NULL));
    int tab2[rozmiar];
    for(int i=0; i<rozmiar; i++){
        tab2[i]=rand()%13+2;
        cout << tab2[i] << ",";
    }
    int *tab1[rozmiar];
    cout << endl << endl;

    zad3_1(tab1,rozmiar,tab2);

    for(int i=0; i<rozmiar; i++){
        delete [] tab1[i];
    }

    getchar();getchar();
}
void zad3_1(int *tab1[],int rozmiar,int tab2[]){

    for(int i=0;i<rozmiar; i++){
        tab1[i]= new int [tab2[i]];
        for(int j=0; j<tab2[i]; j++){
            tab1[i][j]=tab2[i];
            cout << tab1[i][j] << ",";
        }
        cout << endl;
    }

}
void zad2(){

    cout << "Podaj n: ";
    int n; cin >> n;
    cout << "Podaj m: ";
    int m; cin >> m;

    int **macierz = new int *[n];
    for(int i=0; i<n;i++){
        *macierz = new int[m];
    }

    int **matrix = macierz;
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            matrix[i][j]=1;
            cout << matrix[i][j] << ",";
        }
        cout << endl;
    }

}
