#include <iostream>
#include <math.h>

using namespace std;


void zadanie1();
void zadanie2();
void zadanie3();
void zad1_1(int n, float *result);
int  **zad2_2(int *wskaznikx,int *wskazniky,int n);


int main()
{
    int wybor = 1;
    while (wybor!=0) {
        cout << "Zad 1" << endl << "Zad 2 " << endl << "Zad 3 " << endl << "Zad 4 " << endl;
        cin >> wybor;
        switch (wybor) {
        case 1: zadanie1();break;
        case 2: zadanie2();break;
        case 3: zadanie3();break;
        }
    }
    return 0;
}
void zadanie1(){
    cout << "Podaj n: ";
    int n;
    cin >> n ;
    float zmienna;
    float *result = &zmienna;
    zad1_1(n,result);
}
void zad1_1(int n, float *result){
    result=0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            *result+=sqrt(i*i);
        }
        else *result +=sqrt(i*(i-1));
    }

    cout << "Wynik : " << *result;
}
void zadanie2(){
    cout << "Ile n opisze twoj wektor?? Podaj n: ";
    int n;
    cin >> n;
    int *wektorx = new int [n];
    int *wektory = new int [n];


    cout << "Podaj swoje wektory x: ";
    for(int i=0; i<n; i++){
        cin >> wektorx[i];
    }
    cout << "Podaj swoje wektory y: ";
    for(int i=0; i<n; i++){
        cin >> wektory[i];
    }
    int **macierz = new int *[2];
    for(int i=0; i<2; i++){
        macierz[i] = new int [n];
    }
    int **wskaznik = zad2_2(wektorx,wektory,n);

}
int **zad2_2(int *wskaznikx[3],int *wskazniky[3]){
    int **macierz = new int *[3];
    for(int i=0; i<3; i++){
        *macierz = new int [3];
    }
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
           macierz[i][j]=wskaznikx[i])*wskazniky[j]);
        }
    }
    return macierz;
}
void zadanie3(){
    cout << endl;
}
