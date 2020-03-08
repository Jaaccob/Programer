#include <iostream>
#include <windows.h>

using namespace std;
void systemdwoj(int n){
    if(n>0){
        systemdwoj(n/2);
        cout << n%2;
    }
}
void zadaniepierwsze(){
    system("cls");
    Sleep(1000);

    int maska=1;
    cout << "Podaj liczbe: "; int liczba; cin >> liczba;
    if(liczba&maska==1) cout << "Nieparzysta\n\n";
    else cout << "Parzysta\n\n";

    system("pause");
    system("cls");
}
void zadaniedrugie(){
    system("cls");
    Sleep(1000);

    cout << "Podaj liczbe: "; int liczba; cin >> liczba;
    if(liczba&(liczba-1)) cout << "0 - Nie\n\n";
    else cout << "1 - Tak\n\n";

    system("pause");
    system("cls");
}
void zadanietrzecie(){
    system("cls");
    Sleep(1000);

    int maska=1;
    cout << "Podaj liczbe: "; int liczba; cin >> liczba;
    cout << "Twoja liczba to: " << liczba << endl;
    cout << "W systemie dwojkowym: " << endl;
    systemdwoj(liczba);
    cout << "\n\n";
    liczba = (liczba&~(maska<<0));
    liczba = (liczba&~(maska<<1));
    cout << "Twoja liczba po usunieciu dwoch ostatnich bitow: " << liczba << endl;
    cout << "W systemie dwojkowym: " << endl;
    systemdwoj(liczba);
    cout << "\n\n";

    system("pause");
    system("cls");
}
void zadanieczwarte(){
    system("cls");
    Sleep(1000);

    int maska=1;
    cout << "Podaj liczbe: "; int liczba; cin >> liczba;
    cout << "Twoja liczba to: " << liczba << endl;
    cout << "W systemie dwojkowym: " << endl;
    systemdwoj(liczba);
    cout << "\n\n";
    liczba = (liczba&~(maska<<6));
    liczba = (liczba&~(maska<<7));
    cout << "Twoja liczba po usunieciu dwoch ostatnich bitow: " << liczba << endl;
    cout << "W systemie dwojkowym: " << endl;
    systemdwoj(liczba);
    cout <<"\n\n";


    system("pause");
    system("cls");
}
void zadaniepiate(){
    system("cls");
    Sleep(1000);

    int maska=129;
    cout << "Podaj liczbe: "; int liczba; cin >> liczba;
    cout << "Twoja liczba to: " << liczba << endl;
    cout << "W systemie dwojkowym: " << endl;
    systemdwoj(liczba);
    liczba=liczba^maska;
    cout << "Twoja liczba po usunieciu dwoch ostatnich bitow: " << liczba << endl;
    cout << "W systemie dwojkowym: " << endl;
    systemdwoj(liczba);
    cout <<"\n\n";


    system("pause");
    system("cls");
}
void zadanieszuste(){
    system("cls");
    Sleep(1000);

    cout << "Podaj kolor RGB w zapisie szesnastkowym: ";
    char kolor; cin >> kolor;
    char r,g,b;
    r=(kolor>>16)&0xFF;
    cout << r;

    system("pause");
    system("cls");
}


int main()
{
    int wybor=1;
    while (wybor!=0) {
        cout << "                                               Okienko aplikacji" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "1. Za pomoca operatora bitowego & wypisz czy liczba jest parzysta czy nieparzysta. 0 -parzysta 1 -nieparzysta" << endl;
        cout << "2. Za pomoca operatora bitowego & sprawdz czy liczba jest potega liczby 2. 0 -nie 1 -tak " << endl;
        cout << "3. W liczbie osmiobitowej wyzerowac 2 najmłodsze bity." << endl;
        cout << "4. W liczbie osmiobitowej ustawic 2 najstarsze bity." << endl;
        cout << "5. W liczbie osmiobitowej zanegować 2 skrajne bity." << endl;
        cout << "6. Najpopularniejszym modelem barw uzywanym w technice komputerowej jest RGB. W przypadku stron internetowych czesto" << endl;
        cout << "   stosuje sie zapis szesnastkowy. Uzywa sie go np. w plikach CSS. Napisz program, ktory przyjmie kolor zapisany za " << endl;
        cout << "   pomoca liczby szesnastkowej, a wyswietli wartosci od 0 do 255 dla poszczegolnych kanalow RGB." << endl;
        cout << "\n\n0. Wyjdz z konsoli" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\n\n Ktore zadanie chcesz zebym rozwiazal?? Wybierz numer zadania: ";
        cin >> wybor;
        switch(wybor){
            case 1: {zadaniepierwsze(); break;}
            case 2: {zadaniedrugie(); break;}
            case 3: {zadanietrzecie(); break;}
            case 4: {zadanieczwarte(); break;}
            case 5: {zadaniepiate(); break;}
            case 6: {zadanieszuste(); break;}
        }
    }
system("cls");


    return 0;
}
