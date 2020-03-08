#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;

void zad1(){
    cout << "Podaj napis: ";
    string napis;
    cin >> napis;
    int i=0;
    for(i=0; ; i++){
        if(napis[i]=='\0'){
            break;
        }
    }
    cout << endl << "Twoj napis ma dlugosc: " << i ;

}

void zad2_2(string napis, char array[],int n){
    int i=n;
    int j=0;
    while (i!=0) {
        array[i]=napis[j];
        j++;
        i--;
    }
    for(int i=0; i<n; i++){
        cout << array[i];
    }
}
void zad2(){
    system("cls");
    cout << " " << endl;
    cout << "Podaj napis: ";
    string napis;
    cin >> napis;
    int i=0;
    for(i=0; ; i++){
        if(napis[i]=='\0'){
            break;
        }
    }
    cout << endl << "Twoj napis ma dlugosc: " << i << endl << endl;

    char array[i];
    zad2_2(napis,array,i);

    getchar();getchar();
    system("cls");
}
void zad3(){
    system("cls");
    cout << " " << endl;


    cout << "Podaj napis: ";
    string napis;
    cin >> napis;
    int i=0;
    for(i=0; ; i++){
        if(napis[i]=='\0'){
            break;
        }
    }
    cout << endl << "Twoj napis ma dlugosc: " << i << endl << endl;
    int prawda=0;
    for(int j=0;j<(i/2),i>(i/2);j++,i--){
        if(napis[j]=napis[i]){
            prawda=1;
        }
        else {prawda =0; break;}
    }
        cout << "Napis jest: " << prawda;


    getchar();getchar();
    system("cls");

}
void zad4(){
    system("cls");
    string napis;
    cout << "Podaj swoj napis: "; cin >> napis; getline(cin,napis);
    int ilosc=0;
    int dlugosc = napis.length();
    for(int i=0; i<dlugosc-1; i++){
        if(napis[i]==' '){
            ilosc++;
        }
    }
    cout << "Ilosc napisow wynosi: "<< ilosc+1;
    getchar();getchar();
    system("cls");
}
void zad5(){
    system("cls");

    string napis;
    cout << "Podaj swoj napis albo ciag slow: ";
    cin >> napis;
    getline(cin, napis);
    int dlugosc = napis.length();
    cout << "Ile ma wynosic twoj napis: ";
    int n; cin >> n;


    string *wskaznik =&napis;
    wskaznik->substr(0,n);
    cout << endl << endl << "Twoj napis to: ";
    for(int i=0; i<dlugosc-1; i++){
        if(napis[i]=='\0') break;
        cout << napis[i];
    }
    cout << "\n\n";

    getchar();getchar();
    system("cls");
}
void zad6(){
    system("cls");


    string napis;
    cout << "Podaj swoj napis: ";
    cin >> napis;
    int i=0;
    while (napis[i]!='\0') {
        for(int j=65 ;j<=97;j++){
            if((int)napis[i]-32==j){
                napis[i]=j;
                break;
            }
        }
        cout << napis[i];
        i++;
    }
    cout << "\n\n\n\n" << i;


    getchar();getchar();
    system("cls");
}
void zad7(){
    system("cls");


    string napis1,napis2;
    cout << "Podaj swoje dwa napisy: ";
    cin >> napis1; cin >> napis2;
    int i=0,j=0;
    int prawda=0;
    while(napis1[i]!='\0' && napis2[j]!='\0'){
        if(napis1[i]!=napis2[j]) {
            prawda=1;
            break;
        }
        i++;
        j++;
    }
    cout << "Napisy sa: " << prawda;

    getchar();getchar();
    system("cls");
}

int main()
{
    int wybor=1;
    while (wybor!=0){
        system("cls");
        cout << "Zadanie 1" << endl;
        cout << "Zadanie 2" << endl;
        cout << "Zadanie 3" << endl;
        cout << "Zadanie 4" << endl;
        cout << "Zadanie 5" << endl;
        cout << "Zadanie 6" << endl;
        cout << "Zadanie 7" << endl;

        cout << "\n\nPodaj zadanie: "; cin >> wybor;

        switch (wybor) {
        case 1: zad1(); break;
        case 2: zad2(); break;
        case 3: zad3(); break;
        case 4: zad4(); break;
        case 5: zad5(); break;
        case 6: zad6(); break;
        case 7: zad7(); break;

        }


    }
    return 0;
}
