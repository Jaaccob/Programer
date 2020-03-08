#include <iostream>
#include <time.h>

using namespace std;

int *previous(int *a,int *b){
    cout << "A: " << &a << ", B: " << &b << endl;
    if(&a>&b) return a;
    else {
        return b;
    }
}
float sum(float *a,float *b){
    return (*a)+(*b);
}
int *delete_in_array(int *wskaznik, int rozmiar, int n, int *wskaz){
    int ilosc_smierci=0;
    for(int i=0; i<rozmiar; i++){
        if(wskaznik[i]==n){
            wskaznik[i]=0;
            ilosc_smierci++;
        }
    }
    int *wsk= new int[n-ilosc_smierci];
    for(int i=0, j=0; i<rozmiar; i++){
        if(wskaznik[i]!=0){
            wsk[j]=wskaznik[i];
            j++;
        }
    }
    for(int i=0; i<rozmiar-ilosc_smierci; i++){
        cout << wsk[i] << ",";
    }
    delete wskaz;
    wskaznik = new int [rozmiar-ilosc_smierci];
    for(int i=0; i<rozmiar-ilosc_smierci; i++){
        wskaznik[i]=wsk[i];
    }
    cout << "Ilosc smierci: " << ilosc_smierci << endl;
    return wskaznik;

}

int main()
{
    int a=4,b=3;
    int *aa=&a, *bb=&b;
    cout << "Wczesniejszy : " << previous(aa,bb) << endl;
    float c=5.3,d=7.8;
    float *cc=&c,*dd=&d;
    cout << "Suma : " << sum(cc,dd) << endl;
    int n;
    srand(time(NULL));

    cout << "Podaj wielkosc tablicy: ";
    cin >> n;
    int *wskaz = new int [n];
    int *wskaznik = wskaz;
    for(int i=0; i<n; i++){
        wskaznik[i]=rand()%9+1;
        cout << wskaz[i] << ",";
    }
    cout << "Jaka liczbe mam usunac? ";
    int liczba; cin >> liczba;
    delete_in_array(wskaznik,n,liczba,wskaz);
    int si; cin >> si;
    for(int i=0; i<si; i++){
        cout << wskaznik << ",";
    }
    return 0;
}
