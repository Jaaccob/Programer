#include <iostream>
#include <time.h>

using namespace std;

void program1();
int *fprogram1_1(int *wsk_a, int *wsk_b);
void program2();
void fprogram2_1();
void program3();
void fprogram3_1();
void program4();
int fprogram4_1();
void program5();
int *fprogram5_1();
void program6();
void fprogram6_1(int size_array1,double *array1,int size_array2,int *array2);
void program8();
void fprogram8_1();
void program9();
void fprogram9_1();
void program10();
int fprogram10_1();
void program10();

int main()
{
    int wybor =1 ;
    while (wybor!=0) {
        cout << "1. Napisz funkcj\251 w j\251zyku C++, kt\242ra przyjmuje jako argumenty wska\253niki do dw\242ch zmiennych typu int. Funkcja powinna" << endl <<
                "zwr\242ci\206  wska\253nik do mniejszej warto\230ci z liczb wskazywanych przez argumenty, je\230li argumenty maj\245 tak\245 sam\245 warto\230\206"<< endl <<
                "funkcja powinna zwraca\206  wska\253nik na pierwszy argument. "<< endl;
        cout << "2. Napisz program w j\251zyku C++, kt\242ry wczyta od u\276ytkownika liczb\251 ca\210kowit\245 n, a nast\251pnie dynamicznie zaalokuje" << endl <<
                "pami\251\206 dla n elementowej tablicy liczb ca\210kowitych. Program powinien wype\210ni\206 tablic\251 dowolnymi warto\230ciami,"<< endl <<
                "a nast\251pnie wy\230wietli\206 wszystkie elementy tej tablicy."<< endl;
        cout << "3. Napisz program w j\251zyku C++, kt\242ry wczyta od u\276ytkownika nieujemn\245 liczb\251 ca\210kowit\245 n, a nast\251pnie dynamicznie"<< endl <<
                "zaalokuje pami\251\206  dla n elementowej tablicy liczb rzeczywistych. Program powinien wype\210ni\206  tablic\251 zerami, a nast\251pnie"<< endl <<
                "wy\230wietli\206  wszystkie elementy tej tablicy. Na koniec program powinien zmieni\206  rozmiar tablicy na 10 i wype\210ni\206"<< endl <<
                "j\245 jedynkami."<< endl;
        cout << "4. Napisz funkcj\251 w j\251zyku C++, kt\242ra przyjmie jako argumenty tablic\251 warto\230ci zmiennoprzecinkowych, jej rozmiar, dwie"<< endl <<
                "warto\230ci zmiennoprzecinkowe - minimum i maksimum, oraz wska\253nik na uprzednio zaalokowan\245 warto\230\206  ca\210kowit\245."<< endl <<
                "Funkcja powinna zaalokowa\206 i zwr\242ci\206  tablic\251, w kt\242rej znajd\245 si\251 liczby z lewostronnie domkni\251tego"<< endl <<
                "przedzia\210u od minimum do maksimum. Pod warto\230ci\245 wska\253nika z argumentu nale\276y zapisa\206  rozmiar nowoutworzonej"<< endl <<
                "tablicy."<< endl;
        cout << "5. Napisz program w j\251zyku C++, kt\242ry wczytuje od u\276ytkownika liczb\251 ca\210kowit\245 n, nast\251pnie dynamicznie alokuje"<< endl <<
                "pami\251\206  dla n-elementowej tablicy liczb zmiennoprzecinkowych. Napisz funkcj\251 f1, kt\242ra uzupe\210ni t\245 tablic\251 dowolnymi"<< endl <<
                "warto\230ciami oraz funkcj\251 f2, kt\242ra przyjmuje rozmiar tablicy oraz tablic\251 liczb zmiennoprzecinkowych. Funkcja f2 ma "<< endl <<
                "wy\230wietli\206  na standardowym wyj\230ciu kolejne wyrazy ci\245gu od 1 do n zdefiniowanego wzorem:"<< endl <<
                "F0 = 0"<< endl <<
                "Fn = (-1)^n * arr[n-1]+Fn-1, n>0"<< endl;
        cout << "6. Napisz funkcj\251 w j\251zyku C++, kt\242ra przyjmuje w argumentach: tablic\251 liczb zmiennoprzecinkowych arr1, rozmiar tablicy arr1,"<< endl <<
                "tablic\251 liczb ca\210kowitych arr2 oraz rozmiar tablicy arr2. Warto\230ci element\242w w tablicy arr2 to indeksy dla tablicy arr1."<< endl <<
                "Niech funkcja wy\230wietli wszystkie elementy tablicy arr1 o indeksach, kt\242rych warto\230ci znajduj\245 si\251 w tablicy arr2."<< endl <<
                "Je\276eli w arr1 nie ma odpowiedniego indeksu to wy\230wietla dla niego warto\230\206  NAN. Napisz program w j\251zyku C++, kt\242ry"<< endl <<
                "dynamicznie zaalokuje pami\251\206  dla obu tablic, a nast\251pnie arr1 wype\210ni dowolnymi warto\230ciami, za\230 warto\230ci tablicy"<< endl <<
                "arr2 wczyta od u\276ytkownika."<< endl;
        cout << "7. Napisz uniwersaln\245 funkcj\251 swap w j\251zyku C++ oraz program, kt\242ry sprawdzi jej dzia\210anie dla r\242\276nych typ\242w zmiennych."<< endl;
        cout << "8. Napisz program w j\251zyku C++, kt\242ry stworzy dwuwymiarow\245 tablic\251(NxM) w postaci tablicy wska\253nik\242w do tablicy warto\230ci"<< endl <<
                "liczb ca\210kowitych. Napisz funkcj\251 f1, kt\242ra wype\210ni t\245 tablic\251 dowolnymi warto\230ciami, a nast\251pnie funkcj\251 f2,"<< endl <<
                "kt\242ra wy\230wietli warto\230ci z tej tablicy."<< endl;
        cout << "9. Napisz program w j\251zyku C++, kt\242ry wczytuje od u\276ytkownika trzy liczby ca\210kowite n, m, o, a nast\251pnie dynamicznie alokuje"<< endl <<
                "pami\251\206  dla n-elementowej, m-elementowej i o-elementowej tablicy liczb ca\210kowitych. W kolejnym kroku program powinien uzupe\210ni\206"<< endl <<
                "tablice losowymi warto\230ciami z przedzia\210u <0;5> i je posortowa\206 . Na koniec z tak posotowanych tablic algorytm powinien wypisa\206"<< endl <<
                "elementy powtarzaj\245ce si\251 we wszystkich tablicach - rozwi\245zanie powinno by\206  rozwiazaniem optymalne."<< endl;
        cout << "10. Napisz program w j\251zyku C++, kt\242ry wczytuje od u\276ytkownika dwie liczby ca\210kowite n, m, a nast\251pnie dynamicznie alokuje"<< endl <<
                "pami\251\206  dla n-elementowej tablicy liczb ca\210kowitych. W kolejnym kroku program powinien uzupe\210ni\206  tablic\251 losowymi"<< endl <<
                "warto\230ciami z przedzia\210u <-50;50> i je posortowa\206 . Na koniec program powinien znale\253\206  wszystkie pary liczb ca\210kowitych,"<< endl <<
                "kt\242rych suma jest r\242wna liczbie m, wy\230wietli\206  je i poda\206  ich ilo\230\206."<< endl;
        cin >> wybor;
        switch (wybor) {
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

        }
    }
    return 0;
}
void program1(){
    system("cls");
    cout << "Podaj dwie zmienne: ";
    int a,b;
    int *wsk_a = &a, *wsk_b = &b;
    cin >> a >> b;
    cout << "Adres wskaznika a: " << wsk_a << " oraz b: " << wsk_b << endl;
    cout << "Mniejszy jest wskaznik: " << fprogram1_1(wsk_a,wsk_b);
    getchar();getchar();
}
int *fprogram1_1(int *wsk_a, int *wsk_b){
    if(*wsk_a>*wsk_b) return wsk_b;
    else return wsk_a;
}
void program2(){
    system("cls");
    cout << "Podaj wielkosc tablicy: ";
    int n; cin >> n;
    int *tablica_calkowita = new int [n];
    srand(time(NULL));

    for(int i=0; i<n; i++){
        tablica_calkowita[i]= rand()%10+1;
        cout << "[" << tablica_calkowita[i] << "]";
    }
    delete [] tablica_calkowita;
    getchar();getchar();
}
void program3(){
    system("cls");
    cout << "Podaj nieujemna liczbe calkowita: ";
    int n; cin >> n;
    while (n<0) {
        cout << "Podaj poprawna liczbe: ";
        cin >> n;
    }
    int *tablica_calkowita = new int [n];
    for(int i=0; i<n; i++){
        tablica_calkowita[i]=0;
        cout << "[" << tablica_calkowita[i] << "]";
    }
    int zmiana =10;
    int *tablica_calkowita_zmiana = new int [zmiana];
    for(int i=0; i<zmiana; i++){
        tablica_calkowita_zmiana[i]=tablica_calkowita[i];
    }
    delete [] tablica_calkowita;

    getchar();getchar();
}
void program4(){
    system("cls");

    getchar();getchar();
}
void program5(){
    system("cls");

    getchar();getchar();
}
void program6(){
    system("cls");
    cout << "Podaj wielkosc tablicy array1: ";
    int size_array1, size_array2;
    cin >> size_array1;

    int *pointer_to_array2 = new int [size_array2];
    double *pointer_to_array1 = new double [size_array1];
    srand(time(NULL));
    for(int i=0; i<size_array1;i++){
        pointer_to_array1[i]=(rand()%7)*0.13+1.12;
        cout << "[" << pointer_to_array1[i] << "]";
    }
    cout << "Podaj wielkosc talbicy array2: ";
    cin >> size_array2;
    cout << "Teraz podaj liczby do array2: ";
    for(int i=0; i<size_array2; i++){
        cin >> pointer_to_array2[i];
    }
    cout << "Liczby w pointer_to_array2" << endl;
    for(int i=0; i<size_array2; i++){
        cout << pointer_to_array2[i] << ",";
    }
    cout << "\n\n\n\n";
    fprogram6_1(size_array1,pointer_to_array1,size_array2,pointer_to_array2);

    getchar();getchar();
}
void fprogram6_1(int size_array1,double *array1,int size_array2,int *array2){
    for(int i=0; i<size_array2; i++){
        cout << "Indeks " << i << " w tabeli array2 o wartosci" << array2[i] << " wskazuje na ";
        if(array2[i]>size_array1) cout << "NAN" << endl;
        else cout << array1[array2[i]-1] << endl;
    }
}
void program7(){
    system("cls");

    getchar();getchar();
}
void program8(){
    system("cls");

    getchar();getchar();
}
void program9(){
    system("cls");

    getchar();getchar();
}
void program10(){
    system("cls");

    getchar();getchar();
}

