#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

char *tydzien[] = {"poniedzialek","wtorek","sroda","czwartek","piatek","sobota","niedziela"};
int liczbaDni[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};



//Wyswietlanie zadan
void prog1();
void prog2();
void prog3();
void prog4();
void prog5();
void prog6();
void prog7();
void prog8();
void prog9();
void prog10();
void prog11();
void prog12();
void prog13();
void prog14();
void prog15();
void prog16();
void prog17();
void prog18();
void prog19();
void prog20();
void prog21();
void prog22();
//Podprogramy zadan
int fprog1(int liczba);
int fprog1_1(int a,int b);
int fprog10_1(int rok); // Czy rok jest przestepny
int fprog10_2(int dzien , int miesiac , int rok);
void fprog11_1(int n);
bool fprog12_1(int n);




int main()
{
    int wybor = 1;
    while (wybor!=0){

        system("cls");
        cout << "Zadanie 1" << endl;
        cout << "Zadanie 2" << endl;
        cout << "Zadanie 3" << endl;
        cout << "Zadanie 4" << endl;
        cout << "Zadanie 5" << endl;
        cout << "Zadanie 6" << endl;
        cout << "Zadanie 7" << endl;
        cout << "Zadanie 8" << endl;
        cout << "Zadanie 9" << endl;
        cout << "Zadanie 10" << endl;
        cout << "Zadanie 11" << endl;
        cout << "Zadanie 12" << endl;
        cout << "Zadanie 13" << endl;
        cout << "Zadanie 14" << endl;
        cout << "Zadanie 15" << endl;
        cout << "Zadanie 16" << endl;
        cout << "Zadanie 17" << endl;
        cout << "Zadanie 18" << endl;
        cout << "Zadanie 19" << endl;
        cout << "Zadanie 20" << endl;
        cout << "Zadanie 21" << endl;
        cout << "Zadanie 22" << endl;

        cout << "\n\n\nKtore zadanie mam uruchomic ?? Podaj numer: ";
        cin >> wybor;

        switch(wybor){
            case 1: prog1(); break;
            case 2: prog2(); break;
            case 3: prog3(); break;
            case 4: prog4(); break;
            case 5: prog5(); break;
            case 6: prog6(); break;
            case 7: prog7(); break;
            case 8: prog8(); break;
            case 9: prog9(); break;
            case 10: prog10(); break;
            case 11: prog11(); break;
            case 12: prog12(); break;
            case 13: prog13(); break;
            case 14: prog14(); break;
            case 15: prog15(); break;
            case 16: prog16(); break;
            case 17: prog17(); break;
            case 18: prog18(); break;
            case 19: prog19(); break;
            case 20: prog20(); break;
            case 21: prog21(); break;
            case 22: prog22(); break;
        }

    }
    return 0;
}
//Wykonywanie zadan

void prog1(){ //Nie działa
    system("cls");


    cout << "Podaj swoje liczby, a ja sprawdze czy ta liczba posiada potege: ";
    int liczba;
    for(int i=0; i<10; i++){
        cin >> liczba;
        cout << log(liczba) << endl;
    }

    getchar();getchar();
    system("cls");
}
int fprog1(int liczba){                             //Logarytm
    int a=liczba;                                   //Przechowanie liczby
    for(int i=1; i<(a/2); i++){                     //Podstawa
        for(int j=2; ; j++){                        //Wykładnik
            if(fprog1_1(i,j)>a){
                break;
            }
            else if(fprog1_1(i,j)==a){
                cout << "Potega tej liczby to: " << i << " do " << j << endl;
                return 0;
            }
            else cout << "Jest to liczba pierwsza";
        }
    }
    return 0;
}
int fprog1_1(int podstawa,int wykladnik){ //Potegowanie liczby
    int wynik=1;
    for(int i=0; i<wykladnik; i++){
        wynik*=podstawa;
    }
    return wynik;
}
void prog2(){
    system("cls");

    cout << "Wyswietle liczby z przedzialu (2,18> w kolejnosci rosnacej: " << endl;
    for(int i=2; i<=18; i++){
         Sleep(1000);
         cout << i << ",";
    }

    getchar();getchar();
    system("cls");
}
void prog3(){
    system("cls");

    cout << "Wyswietle liczby z przedzialu <20,30> w kolejnosci malejacej: " << endl;
    for(int i=30; i>19; i--){
         Sleep(1000);
         cout << i << ",";
    }

    getchar();getchar();
    system("cls");
}
void prog4(){
    system("cls");

    cout << "Ile liczb mam zsumowac ?? Podaj liczbe: ";
    int n; cin >> n;
    int suma=0;
    system("cls");
    for(int i=1; i<=n; i++){
        suma+=(i*i);
        cout << i << ".   " << i << "*" << i << "=" << i*i << endl;
        cout << "Suma = " << suma - (i*i) << "+" << i*i << endl;
        Sleep(800);
        system("cls");
    }
    cout << "Suma kwadratow twojej liczby wynosi: " << suma;

    getchar();getchar();
    system("cls");
}
void prog5(){
    system("cls");

    cout << "Podaj n: ";
    int n; cin >> n;
    int suma=0;
    for(int i=1; i<(2*n); i++){
        if(i%2==1){
            suma+=i;
            cout << suma-i << "+" << i << "=" << suma << endl;
            Sleep(600);
        }
        else{
             suma-=i;
             cout << suma+i << "-" << i << "=" << suma << endl;
             Sleep(600);
        }
    }
    cout << "Suma twojego n wynosi: " << suma;

    getchar();getchar();
    system("cls");
}
void prog6(){
    system("cls");

    cout << "Podaj dodatnia liczbe zebym mogl obliczyc silnie: ";
    int n;
    cout << "Podaj n: ";
    cin >> n;
    while(n<0){
        system("cls");
        cout << "Twoja liczba miala byc dodatnia. Podaj prawidlowa liczbe: ";
        cin >> n;
    }
    int silnia=1;
    for(int i=1; i<=n; i++){
        silnia*=i;
    }
    cout << "Twoja silnia wynosi: " << silnia;


    getchar();getchar();
    system("cls");
}
void prog7(){
    system("cls");

    int wybor=1;
    while (wybor!=0) {
        cout << "Podaj swoja liczbe i powiedz na co chcesz ja zamienic: " << endl;
        cout << "1. Mile na kilometry." << endl;
        cout << "2. Stopnie Celcjusza na stopnie Fahrenheita." << endl;
        cout << "3. Kilogramy na funty" << endl;
        cout << "4. Litry na galony" << endl;
        cout << "5. km/h na m/s" << endl;
        cout << "\n\nWskaz swoj wybor(0 konczy program)" << endl;
        cin >> wybor;

        switch (wybor) {
        case 1:{
                cout << "Podaj mile: ";
                int mile; cin >> mile;
                cout << "Jest to: " << mile/0.62137;
            break;
        }
        case 2:{
                cout << "Podaj stopnie Celcjusza: ";
                int stopnie; cin >> stopnie;
                cout << "Jest to: " << (stopnie*1.8000)+32.00;
            break;
        }
        case 3:{
                cout << "Podaj kilogramy: ";
                int kilogramy; cin >> kilogramy;
                cout << "Jest to: " << kilogramy*2.2046;
            break;
        }
        case 4:{
                cout << "Podaj litry: ";
                int litry; cin >> litry;
                cout << "Jest to: " << litry*0.26417;
            break;
        }
        case 5:{
                cout << "Podaj km/h: ";
                int kmnah; cin >> kmnah;
                cout << "Jest to: " << (kmnah*1000)/3600;
            break;
        }
        }
    }

    getchar();getchar();
    system("cls");
}
void prog8(){
    system("cls");

    int wybor =1;
    while (wybor!=0) {
        system("cls");
        cout << "1. Oblicz pole kwadratu: " << endl;
        cout << "2. Oblicz pole prostokatu: " << endl;
        cout << "3. Oblicz pole trojkata: " << endl;
        cout << "4. Oblicz pole rombu: " << endl;
        cout << "5. Oblicz pole rownolegloboku: " << endl;
        cout << "6. Oblicz pole trapezu: " << endl;
        cout << "Co chcesz obliczyc, wpisz nr: "; cin >> wybor;

        switch (wybor) {
        case 1: {
            system("cls");
            cout << "Podaj bok kwadratu: ";
            int a; cin >> a;
            cout << "Pole kwadratu wynosi: " << a*a << endl;
            getchar();getchar();
            break;
        }
        case 2:{
            system("cls");
            cout << "Podaj 1 bok prostokatu: ";
            int a; cin >> a;
            cout << "Podaj 2 bok prostokatu: ";
            int b; cin >> b;
            cout << "Pole prostokatu wynosi: " << a*b << endl;
            getchar();getchar();
            break;
        }
        case 3:{
            system("cls");
            cout << "Podaj podstawe trojkata: ";
            int a; cin >> a;
            cout << "Podaj wysokosc trojkata: ";
            int h; cin >> h;
            cout << "Pole trojkata wynosi: " << (a*h)/2 << endl;
            getchar();getchar();
            break;
        }
        case 4:{
            system("cls");
            cout << "Podaj 1 przekatna rombu: ";
            int a; cin >> a;
            cout << "Podaj 2 przekatna rombu: ";
            int b; cin >> b;
            cout << "Pole rombu wynosi: " << (a*b)/2 << endl;
            getchar();getchar();
            break;
        }
        case 5:{
            system("cls");
            cout << "Podaj podstawe rownolegloboku: ";
            int a; cin >> a;
            cout << "Podaj wysokosc rownolegloboku: ";
            int h; cin >> h;
            cout << "Pole rownolegloboku wynosi: " << (a*h) << endl;
            getchar();getchar();
            break;
        }
        case 6:{
            system("cls");
            cout << "Podaj 1 podstawe trapezu: ";
            int a; cin >> a;
            cout << "Podaj 2 podstawe trapezu: ";
            int b; cin >> b;
            cout << "Podaj wysokosc trapezu: ";
            int h; cin >> h;
            cout << "Pole trapezu wynosi: " << ((a+b)*h)/2 << endl;
            getchar();getchar();
            break;
        }
        case 0: break;
        default:{
            cout << "Nie ma takiej opcji!!";
            break;
        }
        }
    }

    getchar();getchar();
    system("cls");
}
void prog9(){
    system("cls");

    int wybor = 1;
    cout << "Podaj pierwsza liczbe: ";
    int pierwsza; cin >> pierwsza;
    cout << "Podaj druga liczbe: ";
    int druga; cin >> druga;
    while (wybor!=0) {
        system("cls");
        cout << "Co chcesz zrobic z swoimi liczbami: " << endl;
        cout << "1. Dodac" << endl;
        cout << "2. Odjac" << endl;
        cout << "3. Pomnozyc" << endl;
        cout << "4. Podzielic" << endl;
        cout << "5. Chcesz zmienic 1 liczbe" << endl;
        cout << "6. Chcesz zmienic 2 liczbe" << endl;

        cout << "\n\nNapisz numer ktory chcesz zeby sie wykonal(0 konczy program)";
        cin >> wybor;
        switch (wybor) {
        case 1: {
            cout << "\n\nDodawanie: " << pierwsza+druga;
            getchar();getchar();
            break;
        }
        case 2: {
            cout << "\n\nOdejmowanie: " << pierwsza-druga;
            getchar();getchar();
            break;
        }
        case 3: {
            cout << "\n\nMnozenie: " << pierwsza*druga;
            getchar();getchar();
            break;
        }
        case 4: {
            if(druga==0 || pierwsza==0){
                cout << "Nie dzieli sie przez 0";
                getchar();getchar();
                break;
            }
            else{
                cout << "Dzielenie: " << pierwsza/druga;
                getchar();getchar();
                break;
            }
        }
        case 5:{
                cout << "Podaj swoja liczbe: ";
                cin >> pierwsza;
                break;
            }
        case 6:{
            cout << "Podaj swoja liczbe: ";
            cin >> druga;
            break;
        }
        case 0: break;
        default:{
            cout << "Nie ma takiej opcji!!!";
            getchar();getchar();
            break;
        }


        }
    }

    getchar();getchar();
    system("cls");
}
void prog10(){
    system("cls");


    cout << "Podaj dzien : ";
    int d; cin >> d;
    cout << "Podaj miesiac: ";
    int m; cin >> m;
    cout << "Podaj rok: ";
    int r; cin >> r;
    int wynik = fprog10_2(d, m, r);

    cout << "Dzien tygodnia dla podanej daty " << tydzien[wynik];


    getchar();getchar();
    system("cls");
}
int fprog10_1(int rok){
    return ((rok % 4 == 0 && rok % 100 != 0 ) || rok % 400 == 0);
}
int fprog10_2(int dzien , int miesiac , int rok){
    int dzienRoku;
    int yy , c, g;
    int wynik;

    dzienRoku = dzien + liczbaDni[miesiac-1];
    if(miesiac>2 && fprog10_1(rok) == 1){
        dzienRoku++;
    }

    yy = (rok - 1) % 100;
    c = (rok - 1) - yy;
    g = yy + (yy / 4);
    wynik = (((((c / 100) % 4) * 5) + g) % 7);
    wynik += dzienRoku - 1;
    wynik %= 7;

    return wynik;
}
void prog11(){
    system("cls");

    cout << "Podaj swoja liczbe: ";
    int n; cin >> n;
    fprog11_1(n);



    getchar();getchar();
    system("cls");
}
void fprog11_1(int n){
    if(n>0){
        fprog11_1(n/2);
        cout << n%2;
    }
}
void prog12(){
    system("cls");


    cout << "Podaj swoja liczbe: ";
    int n; cin >> n;

    if(fprog12_1(n)==1){
        cout << "Liczba " << n << " jest pierwsza";
    }
    else cout << "Liczba " << n << " nie jest pierwsza";


    getchar();getchar();
    system("cls");
}
bool fprog12_1(int n){
    if (n<2) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true ;
}
void prog13(){
    system("cls");



    getchar();getchar();
    system("cls");
}
void prog14(){
    system("cls");

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout << "[" << j*i << "]";
        }
        cout << endl;
    }

    getchar();getchar();
    system("cls");
}
void prog15(){
    system("cls");

    cout << "Podaj jak wielka chcesz miec tabliczke mnozenia. Podaj pierwszy wymiar: ";
    int n; cin >> n;
    cout << "Podaj drugi wymiar: ";
    int m; cin >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << "[" << j*i << "]";
        }
        cout << endl;
    }


    getchar();getchar();
    system("cls");
}
void prog16(){
    system("cls");



    getchar();getchar();
    system("cls");
}
void prog17(){
    system("cls");



    getchar();getchar();
    system("cls");
}
void prog18(){
    system("cls");



    getchar();getchar();
    system("cls");
}
void prog19(){
    system("cls");



    getchar();getchar();
    system("cls");
}
void prog20(){
    system("cls");



    getchar();getchar();
    system("cls");
}
void prog21(){
    system("cls");



    getchar();getchar();
    system("cls");
}
void prog22(){
    system("cls");



    getchar();getchar();
    system("cls");
}
