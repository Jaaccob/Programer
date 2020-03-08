#include <iostream>
#include <stdio.h>
#include <time.h>
#include <math.h>
using namespace std;
static int i=0;
static int lskokow=0;
int bezwzgledna(int a){
    if(a>0) return a;
    else return a*(-1);
}
void rekurencja(int n){
    if(n>0){
        rekurencja(n/2);
        cout << n%2;
    }
}
void skacz(int n, int tab[]){
    int j=0;
    while(n>j-1){
        cout << tab[j] << ",";
        j+=tab[j];
        lskokow++;
    }
    cout << "\n\nLiczba skokow: " << lskokow << endl;
}
int pomnoz(int x){
    return x*x;
}
void sprawdz(int n){
    static int l;
    if(n>0){
        int liczba = n%10;
        if (liczba%3==0){
            l++;
            cout << l << ",";
        }
        sprawdz(n/10);
    }
}

/* Zadanie powtorzenie 1
 * int main()                          //Spróbuj za pomoca delty to zrobić !!!
{
    /*
    float a,b,c,d;
    cin >> a >> b >> c >> d;
    float wynik = 0;
    int x=0;
    for(int i=0; wynik<d ; i++){
        wynik = bezwzgledna(a)*(i*i)+b*i+c;
        x++;
    }
    cout << x << endl;


    */
    /*
    int a,suma=0;
    while(suma<100){
        cin >> a;
        suma+=a;
    }
    cout << suma%100;
    */
    /*
    float a,b;
    cin >> a >> b;
    if(a>0 && b>0) cout <<"Funkcja przechodzi przez cwiartki I,II,III" << endl;
    if(a>0 && b<0) cout <<"Funkcja przechodzi przez cwiartki I,III,IV" << endl;
    if(a<0 && b>0) cout <<"Funkcja przechodzi przez cwiartki I,II,IV" << endl;
    if(a<0 && b<0) cout <<"Funkcja przechodzi przez cwiartki II,III,IV" << endl;
    if(a==0 && b>0) cout <<"Funkcja przechodzi przez cwiartki I,II" << endl;
    if(a==0 && b<0) cout <<"Funkcja przechodzi przez cwiartki III,IV" << endl;
    if(a>0 && b==0) cout <<"Funkcja przechodzi przez cwiartki I,III" << endl;
    if(a<0 && b==0) cout <<"Funkcja przechodzi przez cwiartki II,IV" << endl;
    if(a==0 && b==0) cout <<"Funkcja pokrywa sie z osiami" << endl;
    */
    /*
    int a1=1,a2=0;
    while(a2<=a1){
        cout << "Podaj prawidlowy pierwszy zbior: " << endl;
        cin >> a1;
        cin >> a2;
    }
    int b1=1,b2=0;
    while(b2<=b1){
        cout << "Podaj prawidlowy drugi zbior: " << endl;
        cin >> b1;
        cin >> b2;
    }

    while(b1<=a2){
        cout << b1 << ",";
        b1++;
    }
    cout << "Podaj liczbe calkowita n:" << endl;
    int n; cin >> n;
    rekurencja(n);

    return 0;
}
*/

/* Zadanie 1
   int main(){
   long int wyraz1,wyraz2;
   srand(time(NULL));
   wyraz1 = rand()%20+7;
   int tab[wyraz1];

   for(int i=0; i<wyraz1; i++){
       wyraz2=rand()%10+1;
       tab[i]=wyraz2;
    }
   for(int i=0; i<wyraz1; i++){
       cout << tab[i] << ",";
   }
   cout << "\n\nWielkosc tablicy: " << wyraz1 << "\n\n";
   skacz(wyraz1,tab);


    return 0;
}*/

/* Zadanie 2
int main(){
    cout << "Podaj pierwszy rog: ";
    int x1,y1 ; cin >> x1 >> y1;
    cout << "Podaj pierwszy rog: ";
    int x2,y2 ; cin >> x2 >> y2;
    int x3=x2,y3=y1;
    int prostaa,prostab;

    prostaa = sqrt(pomnoz(x3-x1)+pomnoz(y3-y1));
    prostab = sqrt(pomnoz(x3-x2)+pomnoz(y3-y2));
    cout << prostaa*prostab;

    return 0;
}*/
/*
int main(){
    cout << "Podaj liczbe calkowita: ";
    int n; cin >> n;
    sprawdz(n);
    return 0;
}*/
int main(){

    return 0;
}
