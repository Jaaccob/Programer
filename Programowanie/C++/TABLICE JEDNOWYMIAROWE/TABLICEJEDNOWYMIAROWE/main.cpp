#include <iostream>
#include<math.h>

using namespace std;

void pierwsze(int n, int tablica[]){
    for(int i=0;i<n;i++){
        tablica[i]=tablica[i]*0;
    }
    for(int i=0;i<n;i++){
        cout << tablica[i] << ",";
    }
}
int drugie(int n, int tablica[]){
    for(int i=0;i<n;i++){
        tablica[i]=tablica[i]*2;
    }
    for(int i=0;i<n;i++){
        cout << tablica[i] << ",";
    }
}
int trzeci(int n, int tablica[]){
    int suma=0;
    for(int i=0;i<n;i++){
        suma+=tablica[i];
    }
    return suma;
}
int czwarte(int n, int tablicadwa[]){
    int iloczyn=1;
    for(int i=0;i<n;i++){
        iloczyn*=tablicadwa[i];
    }
    return iloczyn;
}
int piate(int n, int tablicadwa[]){
    int suma=0;
    for(int i=0;i<n;i++){
        if(i%2==0)suma+=tablicadwa[i];
    }
    return suma;
}
float szoste(int n, int tablicadwa[]){
    int suma=0;
    for(int i=0;i<n;i++){
        suma+=tablicadwa[i];
    }
    return suma/(float)n;
}
float siodme(int n, int tablicadwa[]){
    int iloczyn=1;
    for(int i=0;i<n;i++){
        iloczyn*=tablicadwa[i];
    }
    return (float)pow(iloczyn,1/n);
}
int osme(int zmienna){
    int tab[zmienna];
    tab[0]=1;
    for(int i=1; i<zmienna; i++){
        tab[i]=tab[i-1]+1;
    }
    for(int j=2; j*j<=zmienna; j++){
        for(int i=1; i<zmienna; i++){
            if(tab[i]%j==0){
                tab[i]=0;
            }
        }
    }
}
int dziesiate(int n, int tab1[], int tab2[]){
    for(int i=1; i<=n; i++){
        tab1[i-1]=i;
        cout << tab1[i-1] << ",";
    }
    cout << "\n\n";
    for(int i=1; i<=n; i++){
        tab2[i-1]=i+2;
        cout << tab2[i-1] << ",";
    }/*
    for(int i=1; i<n; i++){
        for(int j=n; j>=0; j--){
            tab2[j]=tab1[i];
        }
    }*/
}

int main()
{
   /* //Zadanie 1
    cout << "Podaj n: "; int n=1; cin >> n;
    int tablica[n];
     for (int i=0;i<n;++i)
     {
        cout <<"Podaj "<<i+1<<". element tablicy: ";
        cin >>tablica[i];
     }
     cout << "Zadanie 1" << endl;
     pierwsze(n,tablica);
     //Zadanie 2
     cout << "\n\n";
     for (int i=0;i<n;++i)
     {
        cout <<"Podaj "<<i+1<<". element tablicy: ";
        cin >>tablica[i];
     }
     cout << "Zadanie 2" << endl;
     drugie(n,tablica);
     //Zadanie 3
     cout << "\n\n";
     for (int i=0;i<n;++i)
     {
        cout <<"Podaj "<<i+1<<". element tablicy: ";
        cin >>tablica[i];
     }
     cout << "Zadanie 3" << endl;
     cout << "Suma wynosi: " << trzeci(n,tablica);
     //Zadanie 4
     cout << "\n\n";
     int tablicadwa[5]={1,2,3,4,5};
     cout << "Zadanie 4" << endl;
     cout << "Iloczyn wynosi: " << czwarte(n,tablicadwa);
     //Zadanie 5
     cout << "\n\n";
     cout << "Zadanie 5" << endl;
     cout << "Suma patzystych elementow wynosi: " << piate(n,tablicadwa);
     //Zadanie 6
     cout << "\n\n";
     cout << "Zadanie 6" << endl;
     cout << "Srednia arytmetyczna elementow wynosi: " << szoste(n,tablicadwa);
     //Zadanie 7
     cout << "\n\n";
     cout << "Zadanie 7" << endl;
     cout << "Pierwiastek " << n << " stopnia wynosi: " << siodme(n,tablicadwa);
     //Zadanie 8
    cout << "\n\n";
    cout << "Zadanie 8" << endl;
    cout << "Podaj n: "; int zmiennaosiem; cin >> zmiennaosiem;
    cout << osme(zmiennaosiem);         */
    //Zadanie 10
    cout << "\n\n";
    cout << "Zadanie 10" << endl;
    int n, tab1[n],tab2[n];
    cin >> n;
    dziesiate(n,tab1,tab2);



    return 0;
}
