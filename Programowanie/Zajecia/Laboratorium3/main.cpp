#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
    /*
   //Zadanie 1
    cout << "Podaj liczbe całkowita : " << endl; // Podanie zmiennej n
    int n; cin >> n;

    switch (n) {
        case 0: cout << "Monday" ; break ;
        case 1: cout << "Tuesday" ; break ;
        case 2: cout << "Wednesday" ; break ;
        case 3: cout << "Thursday" ; break ;
    default: cout << "Party"; break;

    }
   */

    /*
    //Zadanie 2
    cout << "Podaj 3 liczby: ";
    int a,b,c; cin >> a >> b >> c;
    int d;
    d=a;
    if(d<b){
        d=b;
    }
    if(d<c){
        d=c;
    }
    cout << "Najwieksza z twoich liczb to: " << d << endl;
    */

    /*
    //Zadanie 3
    cout << "Podaj liczbe całkowita : " << endl; // Podanie zmiennej n
    int n; cin >> n;
    while (n<10){
        cout << "Za malo" << endl;
        n++;
        Sleep(500);
    }
    cout << "N jest wieksze niz 10 :) " << endl;
    */

    /*
    //Zadanie 4
    cout << "Podaj dwie liczby: ";
    int n,k; cin >> n >> k;

    for(int i=0; i<10; i++){
        cout << n << endl;
        Sleep(400);
    }
    for(int j=0; j<=n; j++){
        cout << k << endl;
        Sleep(400);
    }
    */

    //Zadanie 5
    /*
     long int k=0,suma=0;
    do{
        cout << "Podaj liczbe: ";
        cin >> k;
        suma=suma+k;
    }while(k!=0);
     cout << "Suma twoich liczb wynosi: " << suma << endl;
     */

    //Zadanie 7
    /*
    cout << "Podaj liczbe: ";
    int n; cin >> n;

    if(n%2==0){
        cout << "Twoja liczba jest parzysta!"<< endl;
    }
    */

    //Zadanie 8
    cout << "Podaj swój rok, a ja sprawdze czy jest przestepny: ";
    long int rok; cin >> rok;

    if(rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0){
        cout << "leap year" << endl;
    }
    else cout << "common year" << endl;
    return 0;
}
