#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;

void program1();
void program2();
int fprogram2(int *wsk, int liczba, int liczba2);
void program3();
int *fprogram3(int *wsk);
void program4();
int fprogram4(int *wsk, int n);
void program5();
int *fprogram5(int *wsk, int n);
void program6();
int fprogram6(int *wsk1, int *wsk2);
void program7();
int *fprogram7(int *wska, int *wskb);
void program8();
void fprogram8(int *wska, int *wskb);
void program9();
void fprogram9(int *wska, int *wskb);
void program10();
int fprogram10(const int *wska, const int *wskb);
void program11();
int fprogram11(int i, int *wsk);
void program13();
void fprogram13(int *wsk, int n);
void program14();
void fprogram14(int &a, int &b);
void program15();
void fprogram15(int &a, int *wsk);
void program16();
void fprogram16(const int *wska,int *wsk);
void program17();
void fprogram17(const int *wska, int * const wsk);



int main()
{
    int wybor=1;

    while (wybor!=0){
        cout << "----------------------------------------------------------------------------------------------------------------" << endl;

        cout << "1.Napisz program w zadeklarujesz liczbę całkowitą i przypiszesz mu wartość podaną przez użytkownika, a \n"
                "następnie stworzysz wskaźnik na tą liczbę. Program powinien wyświetlić wartość wskazywaną przez wskaźnik, \n"
                "wartość jaką przechowuje zmienna oraz adres pamięci przechowujący tą liczbę i adres na który wskazuje wskaźnik." << endl;

        cout << "2.Napisz funkcję która przyjmuje wskaźnik i liczbę całkowitą i wartość wskazywaną przez ten wskaźnik pomnożony \n"
                "przez liczbę całkowitą z argumentu. Funkcja powinna zwrócić iloczyn tych liczb." << endl;

        cout << "3.Napisz funkcję która przyjmuje wskaźnik do liczby całkowitej, podwaja jej wartość i zwraca wskaźnik na tą \n"
                "liczbę." << endl;

        cout << "4.Napisz funkcję która przyjmuje wskaźnik na pierwszy element tablicy i zwraca wartość największego elementu \n"
                "tablicy (wszystkie operacje na tablicach powinny być robione na wskaźniku)" << endl;

        cout << "5.Napisz funkcję która przyjmuje wskaźnik na pierwszy element tablicy i zwraca wskaźnik na  największy element \n"
                "tablicy (wszystkie operacje na tablicach powinny być robione na wskaźniku) W funkcji main wywołaj funkcję dla \n"
                "wskaźnika i wypisz wartość i adres na który wskazuje wskaźnik (wypisz też dla testu wartość i adres elementu \n"
                "tablicy wpisując ręcznie indeks największego elementu)" << endl;

        cout << "Wskaźniki czesc II" << endl << endl << endl << endl;
        cout << "6.Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóchzmiennych typu int, która zwraca jako wartość \n"
                "mniejszą z liczb wskazywanych przez argumenty." << endl;

        cout << "7.Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch zmiennych typu int, która zwraca jako wartość \n"
                "wskaźnik na zmienną przechowującą mniejszą z liczb wskazywanych przez argumenty" << endl;

        cout << "8.otrzymującą jako argumenty wskaźniki do dwóch zmiennych typu int, która zamienia ze sobą wartości \n"
                "wskazywanych zmiennych" << endl;

        cout << "9.Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch zmiennych typu int, która zamienia ze sobą \n"
                "wartości wskazywanych zmiennych tylko wtedy gdy wskazywana przez drugi argument zmienna jest mniejsza od \n"
                "zmiennej wskazywanej przez pierwszy argument." << endl;

        cout << "10.Napisz funkcję, której argumentami są dwa wskaźniki do stałych typu int zaś zwracaną wartością jest suma \n"
                "wartości zmiennych wskazywanych przez argumenty" << endl;

        cout << "11.Napisz funkcję, której argumentami są i typu int oraz w wskaźnik do int, która przepisuje wartość i do \n"
                "zmiennej wskazywanej przez w." << endl;

        cout << "12.Napisz funkcję która przyjmuje liczbę typu float oraz dwa wskaźniki. Funkcja powinna do pierwszego \n"
                "wskaźnika przypisać wartość całkowitą liczby natomiast do drugiego wskaźnika część dziesiętną liczby.\n"
                "Brak mozliwosci rozwiazania" << endl;





        cout << "\n\n\n13.Napisz funkcję która przyjmuje wskaźnik na pierwszy element tablicy i liczbę elementów a następnie \n"
                "przypisuje do tablicy kolejno silnie. Przykład dla tablicy 5-elementowej:1 2 6 24120" << endl;

        cout << "14.Napisz funkcję otrzymującą jako argumenty referencje do dwóch zmiennych typu int, która zamienia ze sobą \n"
                "wartości zmiennych, do których referencje dostaliśmy w argumentach." << endl;

        cout << "15.Napisz funkcję otrzymującą dwa argumenty referencję a oraz wskaźnik b do zmiennych typu int, która zamienia \n"
                "ze sobą wartości zmienny" << endl;

        cout << "16.Napisz funkcję, która dostaje dwa argumenty: wskaźnik na stałą typu int i wskaźnik na zmienną typu int, i \n"
                "przepisuje zawartość stałej wskazywanej przez pierwszy argument do zmiennej wskazywanej przez drugi argument." << endl;

        cout << "17.Napisz funkcję, która dostaje dwa argumenty: wskaźnik na stałą typu int i stały wskaźnik na zmienną typu int.\n"
                " I przepisuje zawartość stałej wskazywanej przezpierwszy argument do zmiennej wskazywanej przez drugi argument." << endl;

        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "----------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Wybierz program" << endl;
        cin >> wybor;


        switch (wybor) {
            case 1: program1(); break;
            case 2: program2(); break;
            case 3: program3(); break;
            case 4: program4(); break;
            case 5: program5(); break;
            case 6: program6(); break;
            case 7: program7(); break;
            case 8: program8(); break;
            case 9: program9(); break;
            case 10: program10(); break;
            case 11: program11(); break;
            case 13: program13(); break;
            case 14: program14(); break;
            case 15: program15(); break;
            case 16: program16(); break;
            case 17: program17(); break;
        }
    }
  return 0;
}


void program1(){
    system("cls");

    int liczba;
    cout << "Podaj liczbe calkowita: "; cin >> liczba;
    int *wsk = &liczba;
    cout << "Wartosc wskazana przez wskaznik: " << *wsk << endl;
    cout << "Wartosc jaka przechowuje zmienna: " << liczba << endl;
    cout << "Adres pamieci liczby:            " << &liczba << endl;
    cout << "Adres wskazywany przez wskaznik: " << wsk << endl;
    system("pause");
    system("cls");
}
void program2(){
    system("cls");
    int liczba;
    int *wsk = &liczba;
    cout << "Podaj swoja liczbe calkowita: "; cin >> liczba;
    cout << fprogram2(wsk,liczba,(*wsk)*liczba) << endl;

    system("pause");
    system("cls");
}
int fprogram2(int *wsk, int liczba, int liczba2){
    return *wsk*liczba*liczba2;
}
void program3(){
    system("cls");

    cout << "Podaj swoja liczbe: ";
    int liczba; cin >> liczba;
    int *wsk = &liczba;
    cout << "Wskaznik na twoja liczbe wynosi: " << fprogram3(wsk) << endl;
    cout << "Jej wartosc wynosi: " << *wsk << endl;
    system("pause");
    system("cls");
}
int *fprogram3(int *wsk){
    *wsk*=2;
    return wsk;
}
void program4(){
    system("cls");

    cout << "Jak wielka ma byc twoja tablica: ";
    int wielkosc; cin >> wielkosc;

    srand(time(NULL));
    int tab[wielkosc];

    for(int i=0;i<wielkosc;i++){
        tab[i]=rand()%100;
        cout << tab[i] << ",";
    }
    int *wsk=tab;
    cout << *wsk;
    cout << "\n\nNajwieksza liczba wynosi: " << fprogram4(wsk,wielkosc) << endl;

    system("pause");
    system("cls");
}
int fprogram4(int *wsk,int n){
    int najwieksza=*wsk;
    for(int i=0; i<n; i++){
        if(*(wsk+i)>najwieksza) najwieksza = *(wsk+i);
    }
    return najwieksza;
}
void program5(){
    system("cls");

    cout << "Jak wielka ma byc twoja tablica: ";
    int wielkosc; cin >> wielkosc;

    srand(time(NULL));
    int tab[wielkosc];

    for(int i=0;i<wielkosc;i++){
        tab[i]=rand()%100;
        cout << tab[i] << ",";
    }
    int *wsk=tab;
    cout << *wsk;
    cout << "\n\nAdres Najwiekszej liczby wynosi: " << fprogram5(wsk,wielkosc) << " ,a wynosi: " << *fprogram5(wsk,wielkosc) << endl;

    system("pause");
    system("cls");
}
int *fprogram5(int *wsk,int n){
    int najwieksza=*wsk;
    int w=*wsk;
    for(int i=0; i<n; i++){
        if(*(wsk+i)>=najwieksza) {najwieksza = *(wsk+i); w=i;}
    }
    return (wsk+w);
}
void program6(){
    system("cls");
    cout << "Podaj swoje dwie liczby, a ja znajde ktora jest mniejsza: ";
    int a,b; cin >> a >> b;
    int *wsk1=&a, *wsk2=&b;

    cout << "Mniejsza z twoich liczb to: " << fprogram6(wsk1,wsk2) << endl;
    system("pause");
    system("cls");
}
int fprogram6(int *wsk1, int *wsk2){
    if(*wsk1 > *wsk2) return *wsk2;
    else return *wsk1;
}
void program7(){
    cout << "Podaj swoje dwie zmienne" << endl;
    cout << "Podaj 1 zmienna: "; int a; cin >> a; int *wska = &a;
    cout << "Podaj 2 zmienna: "; int b; cin >> b; int *wskb = &b;
    cout << "Wartosc wskaznika: " << fprogram7(wska,wskb);
}
int *fprogram7(int *wska, int *wskb){
    if(*wska>*wskb) return wskb;
    else return wska;
}
void program8(){
    system("cls");

    cout << "Podaj swoje dwie zmienne" << endl;
    cout << "Podaj 1 zmienna: "; int a; cin >> a; int *wska = &a;
    cout << "Podaj 2 zmienna: "; int b; cin >> b; int *wskb = &b;
    cout << "Pierwsza zmienna wynosi: " << *wska << ". Druga zmienna wynosi: " << *wskb << endl;
    cout << "Twoje zmienne wynosza teraz: " << endl;
    fprogram8(wska,wskb);

    system("pause");
    system("cls");
}
void fprogram8(int *wska, int *wskb){
    *wska=(*wska)-(*wskb);
    *wskb=(*wskb)+(*wska);
    *wska=(*wskb)-(*wska);
    cout << "Pierwsza zmienna: " << *wska << endl;
    cout << "Druga zmienna: " << *wskb << endl;
}
void program9(){
    system("cls");

    cout << "Podaj swoje dwie zmienne" << endl;
    cout << "Podaj 1 zmienna: "; int a; cin >> a; int *wska = &a;
    cout << "Podaj 2 zmienna: "; int b; cin >> b; int *wskb = &b;
    cout << "Pierwsza zmienna wynosi: " << *wska << ". Druga zmienna wynosi: " << *wskb << endl;
    cout << "Twoje zmienne wynosza teraz: " << endl;
    fprogram9(wska,wskb);

    system("pause");
    system("cls");
}
void fprogram9(int *wska, int *wskb){
    if(*wska>*wskb){
        *wska=*wska-*wskb;
        *wskb=*wskb+*wska;
        *wska=*wskb-*wska;
        cout << "Pierwsza zmienna: " << *wska << endl;
        cout << "Druga zmienna: " << *wskb << endl;
    }
    else    cout << "Pierwsza zmienna: " << *wska << endl;
            cout << "Druga zmienna: " << *wskb << endl;
}
void program10(){
    system("cls");

    const int a=5; const int *wska = &a;
    const int b=7; const int *wskb = &b;
    cout << "Pierwsza stala wynosi: " << *wska << ". Druga stala wynosi: " << *wskb << endl;
    cout << "Suma tych stalych wynosi: " << endl;
    cout << fprogram10(wska,wskb);

    system("pause");
    system("cls");
}
int fprogram10(const int *wska, const int *wskb){
    int a = *wska+*wskb;
    return a;
}
void program11(){
    system("cls");
    cout << "Podaj swoja zmienna: "; int i; cin >> i;
    int w=10, *wsk=&w;
    cout << "Zmienna przepisana w: " << fprogram11(i,wsk) << endl;
    cout << "Zmienna w: " << w << endl;
    system("pause");
    system("cls");
}
int fprogram11(int i, int *wsk){
    *wsk=i;
    return *wsk;
}
void program13(){
    system("cls");
    cout << "Podaj wielkosc tablicy: "; int n; cin >> n;
    int *tab = new int[n];
    fprogram13(tab,n);

    for(int i=0; i<n; i++){
        cout << *(tab+i) << ",";
    }

    delete [] tab;
    system("pause");
    system("cls");
}
void fprogram13(int *tab, int n){
    int silnia =1;
    for(int i=1; i<=n; i++){
        *(tab+i-1) = silnia*=i;
    }
}
void program14(){
    system("cls");
    cout << "Podaj 2 zmienne: ";
    cout << "Pierwsza zmienna: "; int a; cin >> a;
    cout << "Druga zmienna: "; int b; cin >> b;
    fprogram14(a,b);

    system("pause");
    system("cls");

}
void fprogram14(int &a, int &b){
    a=a-b;
    b=b+a;
    a=b-a;
    cout << "Twoje a wynosi teraz: " << a << endl;
    cout << "Twoje b wynosi teraz: " << b << endl;
}
void program15(){
    system("cls");
    cout << "Podaj 2 zmienne: ";
    cout << "Pierwsza zmienna: "; int a; cin >> a;
    cout << "Druga zmienna: "; int b; cin >> b;
    int *wsk = &b;
    fprogram15(a,wsk);

    system("pause");
    system("cls");
}
void fprogram15(int &a, int *wsk){
    a=a-*wsk;
    *wsk=*wsk+a;
    a=*wsk-a;
    cout << "Twoje a wynosi teraz: " << a << endl;
    cout << "Twoje b wynosi teraz: " << *wsk << endl;
}
void program16(){
    system("cls");
    cout << "Podaj zmienna (stala zdefiniowana na 6): ";
    const int a=6;
    int b; cin >> b;
    int *wsk = &b;
    int const * wska = &a;
    fprogram16(wska,wsk);

    system("pause");
    system("cls");
}
void fprogram16(int const * wska,int *wsk){

    *wsk = *wska;
    cout << *wsk << "<-- Wskaznik zmiennej ";
}
void program17(){
    system("cls");
    const int a=6;
    cout << "Podaj swoja zmienna: "; int b; cin >> b;
    const int *wska = &a;
    int * const wsk = &b;

    fprogram17(wska,wsk);
    system("pause");
    system("cls");
}
void fprogram17(const int *wska, int * const wsk){
    *wsk = *wska;
    cout << "Zmiana wartosci z twojej na 6: -->" << *wsk;
}
