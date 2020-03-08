#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;


void program1();
void program2();
void fprogram2_1(int *wskaznik1, int *wskaznik2);
void program3();
void fprogram3_1(int *wskaznik_poczatek, int *wskaznik_koniec);
void program4();
int fprogram4_1(int wielkosc_char, char *napis);
void program5();
int *fprogram5_1(int wielkosc_tablicy,int szukana_w_tablicy,int *wskaznik_na_tablice);
void program6();
bool fprogram6_1(int liczba);   //Sprawdza czy jest to liczba parzysta
void fprogram6_2(string liczby, bool (*czy_parzysta)(int liczba));
void program8();
void fprogram8_1(const int *wskaznik_na_stala,int *wskaznik_na_zmienna);
void program9();
void fprogram9_1(char *wskaznik_na_napis);
void program10();
int fprogram10_1(int *wsk_a,int *wsk_b,int *wsk_c);
void program10();
int fprogram11_1(int *wsk_a,int *wsk_b,int *wsk_c);

int main()
{
    int wybor=1;
    while (wybor!=0) {
        system("cls");
        cout << "1. Napisz program w j\251zyku C++, kt\242ry modyfikuje warto\230\206  zmiennej za pomoc\245 wska\253nika. " << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "2. Napisz funkcje w j\251zyku C++, kt\242ra zamienia warto\230ciami dwie liczby rzeczywiste. Napisz program, kt\242ry przetestuje " << endl <<
                "dzia\210anie tej funkcji." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "3. Napisz funkcj\251 w j\251zyku C++, kt\242ra przyjmuje jako argument wska\253nik na pocz\245tek i koniec tablicy liczb ca\210kowitych." << endl <<
                "Funkcja powinna wy\230wietli\206  wszystkie elementy tej tablicy. Napisz program w j\251zyku C++, kt\242ry przetestuje dzia\210anie " << endl <<
                "tej funkcji." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "4. Napisz funkcj\251 rekurencyjn\245 w j\251zyku C++, kt\242ra oblicza rozmiar napisu (char str[]). Napisz program w j\251zyku C++," << endl <<
                "kt\242ry przetestuje dzia\210anie tej funkcji." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "5. Napisz funkcj\251 w j\251zyku C++, kt\242ra przyjmie jako argumenty automatyczn\245 tablic\251 warto\230ci ca\210kowitych oraz jej " << endl <<
                "rozmiar oraz poszukiwan\245 warto\230\206 . Funkcja powinna zwr\242ci\206  wska\253nik na pierwsz\245 kom\242rk\251 tablicy, w kt\242rej znajdzie t\245" << endl <<
                "warto\230\206. Je\276eli nie ma takiej liczby w tablicy, nale\276y zwr\242ci\206  wska\253nik na NULL." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "6. Napisz funkcj\251 w j\251zyku C++, kt\242ra przyjmuje w argumencie liczb\251 ca\210kowit\245 oraz zmienn\245 bool przez referencj\251." << endl <<
                "Funkcja powinna sprawdzi\206 , za pomoc\245 operacji bitowych, czy cyfry przekazanej liczby ca\210kowitej s\245 parzyste. Ponadto" << endl <<
                "funkcja powinna ustawi\206  przekazan\245 zmienn\245 typu bool na warto\230\206  true, je\230li wszystkie cyfry s\245 parzyste i false w" << endl <<
                "przeciwnym wypadku." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "7. Zmodyfikuj poprzedni program tak, aby zmienna typu bool w argumencie by\210a przekazywana przez wska\253nik." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "8. Napisz funkcj\251 w j\251zyku C++, kt\242ra dostaje dwa argumenty: wska\253nik na sta\210\245 typu int i sta\210y wska\253nik na zmienn\245" << endl <<
                "typu int. Funkcja powinna przepisa\206  zawarto\230\206  sta\210ej wskazywanej przez pierwszy argument do zminnej wskazywanej" << endl <<
                "przezdrugi argument. Napisz program, kt\242ry przetestuje dzia\210anie tej funkcji." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "9. Napisz odpowiednie funkcje oraz program w j\251zyku C++, kt\242ra umo\276liwi\245 stworzenie kopii wczytanego od u\276ytkownika" << endl <<
                "napisu. Napis nie mo\276e by\206  d\210u\276szy ni\276 100 znak\242w." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "10. Napisz funkcj\251 w j\251zyku C++, kt\242ra przyjmuje jako argumenty wska\253niki do trzech zmiennych typu int. Funkcja powinna" << endl <<
                "do trzeciego argumentu zapisa\206  sum\251 warto\230ci z liczb wskazywanych przez dwa poprzednie argumenty. Napisz program w" << endl <<
                "j\251zyku C++, kt\242ry przetestuje dzia\210anie tej funkcji." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "11. Zmodyfikuj poprzedni program tak aby korzysta\210 z referencji." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "12. Napisz funkcj\251 w j\251zyku C++, kt\242ra przyjmuje jako argumenty automatyczn\245 tablic\251 warto\230ci ca\210kowitych, jej rozmiar" << endl <<
                "oraz referencj\251 do zmiennej logicznej. Funkcja powinna posortowa\206  tablic\251 w taki spos\242b, \276e warto\230ci nieparzyste" << endl <<
                "znajd\245 si\251 w pocz\245tkowej cz\251\230ci tablicy, a parzyste w ko\344cowej. Kolejno\230\206  warto\230ci wewn\245trz tych grup jest dowolna." << endl <<
                "Funkcja powinna zwr\242ci\206  wska\253nik na kom\242rk\251 tablicy, w kt\242rej pojawi si\251 pierwsza liczba parzysta. Zmiennej " << endl <<
                "przekazanej przez referencj\251 podany w argumencie, nale\276y przypisa\206  prawd\251, je\276eli funkcja dokona\210a w tablicy" << endl <<
                "jak\245kol wiekzmian\251, a fa\210sz w przeciwnym przypadku. W zadaniu wykorzystaj wska\253nikowy spos\242b indeksowania tablicy. Dla" << endl <<
                "u\210atwienia za\210\242\276my, \276e w tablicy jest co najmniej jedna warto\230\206  parzysta i nieparzysta. " << endl;
        cout << "" << endl;
        cout << "Wybierz program: " << endl;

        cin >> wybor;
        switch (wybor) {
        case 0: break;
        case 1: program1();break;
        case 2: program2();break;
        case 3: program3();break;
        case 4: program4();break;
        case 5: program5();break;
        case 6: program6();break;
        case 7: program6();break;
        case 8: program8();break;
        case 9: program9();break;
        case 10: program10();break;
        case 11: break;
        case 12: break;

        }

    }
    return 0;
}
void program1(){
    system("cls");
    int zmienna;
    cout << "Podaj zmienna: ";
    cin >> zmienna;
    int *wskaznik = &zmienna;
    cout << "Zmien zmienna za pomoca wskaznika: ";
    cin >> *wskaznik;
    cout << "Wartosc pod zmienna: " << zmienna;
    getchar();getchar();
}
void program2(){
    system("cls");
    cout << "Podaj dwie liczby Rzeczywiste (od -nieskonczonosci do +nieskonczonosci): ";
    int liczba1, liczba2;
    cin >> liczba1 >> liczba2;
    int *wsk1 = &liczba1, *wsk2 = &liczba2;

    fprogram2_1(wsk1,wsk2);
    cout << "Wartosc liczby 1 pod wskaznikiem 1: " << *wsk1 << endl;
    cout << "Wartosc liczby 2 pod wskaznikiem 2: " << *wsk2 << endl;
    getchar();getchar();
}
void fprogram2_1(int *wskaznik1, int *wskaznik2){
    *wskaznik1=*wskaznik1+*wskaznik2;
    *wskaznik2=*wskaznik1-*wskaznik2;
    *wskaznik1=*wskaznik1-*wskaznik2;
}
void program3(){
    system("cls");
    cout << "Jak wielka chcesz miec tablice ? Podaj jej wielkosc: ";
    int wielkosc_tablicy; cin >> wielkosc_tablicy;

    int array[wielkosc_tablicy];
    srand(time(NULL));
    for(int i=0; i<wielkosc_tablicy; i++){
        array[i]=rand()%9+1;
        cout << "[" << array[i] << "]";
    }
    int *wskaznik_poczatek = array;
    int *wskaznik_koniec = &array[wielkosc_tablicy];


    fprogram3_1(wskaznik_poczatek,wskaznik_koniec);

    getchar();getchar();
}
void fprogram3_1(int *wskaznik_poczatek, int *wskaznik_koniec){
    cout << "\n\nWyswietlanie przez funkcje tablicy array: " << endl;
    int i=0;
    while (wskaznik_poczatek+i!=wskaznik_koniec) {
        cout << "[" << wskaznik_poczatek[i] << "]";
        i++;
    }

}
void program4(){
    system("cls");
    char *str = "napis";
    int i=0;
    while (str[i]!='\0') {
        cout << str[i];
        i++;
    }
    cout << "Wartosc i: " << i;
    cout << "Wielkosc napisu wynosi: " << fprogram4_1(0,str);
    Sleep(1000);
    getchar();getchar();
}
int fprogram4_1(int wielkosc_char, char *napis){
    if(napis[wielkosc_char]=='\0'){
        return wielkosc_char;
    }
    else {
        wielkosc_char++;
        fprogram4_1(wielkosc_char,napis);
    }
}
void program5(){
    system("cls");
    cout << "Podaj wielkosc tablicy, ktora mam stworzyc: ";
    int wielkosc_tablicy; cin >> wielkosc_tablicy;
    int tablica[wielkosc_tablicy];
    int *wskaznik_na_tablice = tablica;
    srand(time(NULL));
    for(int i=0; i<wielkosc_tablicy; i++){
        wskaznik_na_tablice[i]=rand()%10+1;
        cout << "[" << wskaznik_na_tablice[i] << "]";
    }
    cout << "\n\nPodaj swoja liczbe, a ja sprawdze czy posiadam taka w swojej tablicy(1-10): ";
    int szukana_w_tablicy;
    do{
        cout << "Podaj szukana: ";
        cin >> szukana_w_tablicy;
    }while(szukana_w_tablicy<0 && szukana_w_tablicy>11);
    cout << "Wskaznik pokazuje komorke o wartosci: " << fprogram5_1(wielkosc_tablicy,szukana_w_tablicy,wskaznik_na_tablice);


    getchar();getchar();
}
int *fprogram5_1(int wielkosc_tablicy,int szukana_w_tablicy,int *wskaznik_na_tablice){
    for(int i=0;i<wielkosc_tablicy;i++){
        if(wskaznik_na_tablice[i]==szukana_w_tablicy){
            return  wskaznik_na_tablice+i;
        }
    }
    wskaznik_na_tablice=nullptr;
    return wskaznik_na_tablice;
}
void program6(){
    system("cls");
    cout << "Podaj ciag swoich liczb, a ja sprawdze czy sa parzyste";
    string liczby;
    cin >> liczby;
    bool (*czy_parzysty)(int liczby) = fprogram6_1;

    fprogram6_2(liczby,czy_parzysty);
    Sleep(1000);
    getchar();getchar();
}
bool fprogram6_1(int liczba){
    int maska=1;
    if(liczba&maska){
        return false;
    }
    else{
        return true;
    }
}
void fprogram6_2(string liczby, bool (*czy_parzysta)(int liczba)){
    int i=0;
    while (liczby[i]!='\0') {
        if(czy_parzysta(liczby[i])){
            cout << "Liczba nr: " << i << " o wartosci: " << liczby[i] << " jest parzysta " << endl;
        }
        else{
            cout << "Liczba nr: " << i << " o wartosci: " << liczby[i] << " jest nie parzysta " << endl;
        }
        i++;
    }
}
void program8(){
    system("cls");
    cout << "Podaj swoja zmienna: ";
    int zmienna;
    cin >> zmienna;
    const int stala = 5;

    fprogram8_1(&stala,&zmienna);
    cout << "Stala: " << stala << endl;
    cout << "Zmienna: " << zmienna;
    getchar();getchar();
}
void fprogram8_1(const int *wskaznik_na_stala,int *wskaznik_na_zmienna){
    *wskaznik_na_zmienna=*wskaznik_na_stala;
}
void program9(){
    system("cls");
    cout << "Podaj swoj napis nie dluzszy niz 100 znakow: ";
    char *napis = new char[100];
    cin.ignore(100,'\n');
    cin.getline(napis,100);
    fprogram9_1(napis);
    getchar();getchar();
}
void fprogram9_1(char *wskaznik_na_napis){
    char *kopia_napisu = new char [100];
    int i=0;
    cout << "Kopia napisu w funkcji : " << endl;
    while (wskaznik_na_napis[i]!='\0') {
        kopia_napisu[i]=wskaznik_na_napis[i];
        cout << kopia_napisu[i];
        i++;
    }
}
void program10(){
    system("cls");
    cout << "Podaj 3 liczby: ";
    int a,b,c;
    cin >> a >> b >> c;
    int *wsk_a = &a, *wsk_b = &b, *wsk_c = &c;
    cout << "Suma twoich liczb wynosi: " << fprogram10_1(wsk_a,wsk_b,wsk_c);
    getchar();getchar();
}
int fprogram10_1(int *wsk_a,int *wsk_b,int *wsk_c){
    return *wsk_c=*wsk_c+*wsk_a+*wsk_b;

}
void program11(){
    system("cls");
    cout << "Podaj 3 liczby: ";
    int a,b,c;
    cin >> a >> b >> c;
    int &wsk_a = a, &wsk_b = b, &wsk_c = c;
    cout << "Suma twoich liczb wynosi: " << fprogram10_1(&wsk_a,&wsk_b,&wsk_c);
    getchar();getchar();
}
int fprogram11_1(int *wsk_a,int *wsk_b,int *wsk_c){
    return *wsk_c=*wsk_c+*wsk_a+*wsk_b;

}
