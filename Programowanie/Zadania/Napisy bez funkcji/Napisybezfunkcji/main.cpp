#include <iostream>
#include<string>

using namespace std;
void zadanie1();
void zadanie2();
void zadanie3();
void zadanie4();
void zadanie5();
void zadanie6();
void zadanie7();
void zadanie8();
void zadanie9();
void zadanie10();
void zadanie11();
void zadanie12();
void zadanie13();
void zadanie14();
void zadanie15();
void zadanie16();
void zad2_2(string napis, char array[],int n);
void zad9_1(string nap_1, string nap_2, string *nap_3);
void zad11_1(char *napis,char *sms);
void zad12_1(string napis);
bool zad13_1(char *napis1, char *napis2);
void zad14_1(char *napis, int n);
void zad15_1(char *napis, char tablica[], int n);
int zad16_1(string napis);

int main()
{
    int wybor = 1;
    while(wybor!=0){
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

        cout << "\n\nWybierz zadanie: ";
        cin >> wybor;

        switch (wybor) {
        case 1:{ zadanie1(); break;}
        case 2:{ zadanie2(); break;}
        case 3:{ zadanie3(); break;}
        case 4:{ zadanie4(); break;}
        case 5:{ zadanie5(); break;}
        case 6:{ zadanie6(); break;}
        case 7:{ zadanie7(); break;}
        case 8:{ zadanie8(); break;}
        case 9:{ zadanie9(); break;}
        case 10:{ zadanie10(); break;}
        case 11:{ zadanie11(); break;}
        case 12:{ zadanie12(); break;}
        case 13:{ zadanie13(); break;}
        case 14:{ zadanie14(); break;}
        case 15:{ zadanie15(); break;}
        case 16:{ zadanie16(); break;}
        }
    }
    return 0;
}
void zadanie1(){
    system("cls");
    cout << "Podaj swoj napis: ";
    getchar();
    string napis;
    getline(cin, napis);
    for(int i=0;i<=6; i++){
        cout << napis[i];
    }
    int i=0;
    while (napis[i]!='\0') {
        i++;
    }
    cout << "Dlugosc napisu wynosi: " << i << endl;
    getchar();getchar();
    system("cls");
}
void zadanie2(){
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
void zad2_2(string napis, char array[],int n){
    int i=n;
    int j=0;
    while (i!=0) {
        array[i]=napis[j];
        j++;
        i--;
    }
    for(int i=1; i<=n; i++){
        cout << array[i];
    }
}
void zadanie3(){
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
void zadanie4(){
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
void zadanie5(){
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
void zadanie6(){
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
void zadanie7(){
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
void zadanie8(){
        system("cls");
    string napis1 = "napis";
    string napis2 = "panis";
    int n = napis1.length();
    for(int i=0; i<n; i++){
        if(napis1[i]==napis2[i]){
            napis1[i]='0';
        }
    }

    for(int i=0;i<n;i++){
        if(napis1[i]=='0'){
            napis1.erase(napis1.begin()+i);
        }
    }
    cout << napis1;
    getchar();getchar();
    system("cls");

}
void zadanie9(){
    system("cls");
    string nap_1 = "napis", nap_2 = "dlugosc";
    string *nap_3 = new string;
    zad9_1(nap_1,nap_2,nap_3);
    cout << *nap_3;
    getchar();getchar();
    system("cls");
}
void zad9_1(string nap_1, string nap_2, string *nap_3){
    *nap_3=(nap_1+nap_2);
}
void zadanie10(){
    system("cls");

    cout << "Podaj swoje napisy: ";
    string wyraz1, wyraz2, wyraz3;
    cin >> wyraz1 >> wyraz2;

    int dlugosc , n=0;
    if(wyraz1.length()<wyraz2.length()){
        dlugosc=(wyraz1.length())*2;
    }
    else {
        dlugosc=(wyraz2.length())*2;
    }
    for(int i=0;i<dlugosc;i++){
        if(i%2==0){
            wyraz3[i]=wyraz1[n];
        }
        else {
            wyraz3[i]=wyraz2[n];
            n++;
        }
        cout << wyraz3[i];
    }
    cout << endl;

    getchar();getchar();
    system("cls");
}
void zadanie11(){
    system("cls");

    char *napis=new char[100];
    char *sms=new char[100];

    cin.ignore();
    cin.getline(napis,100);
    zad11_1(napis,sms);
    int i=0;
    while (sms[i]!='\0') {
        cout << sms[i];
        i++;
    }
    cout << endl;
    delete [] napis;
    delete [] sms;


    getchar();getchar();
    system("cls");
}
void zad11_1(char *napis,char *sms){
    int i=0,j=0;
    while (napis[i]!='\0') {
        sms[j]=napis[i];
        if(napis[i]==' ' && napis[i+1]>='a' && napis[i+1]<='z'){  // [spacja](poczatek nowego slowa zaczynajacego sie a-z)
            sms[j]=(napis[i+1])-32;                               // zamiana na duza litere
            i++;
        }
        i++;
        j++;
    }
    if(sms[0]>='a' && sms[0]<='z'){                               // sprawdzenie pierwszej litery czy zaczyna sie z duzej litery
        sms[0]=napis[0]-32;
    }
}
void zadanie12(){
    system("cls");

    string napis;
    cin.ignore(50,'\n');
    getline(cin,napis);
    int i=0;
    zad12_1(napis);
    while (napis[i]!='\0') {
        cout << napis[i];
        i++;
    }


    getchar();getchar();
    system("cls");
}
void zad12_1(string napis){                     //Nie dziala - zapytaj co może nie dzialać
    int i=1;
    while (napis[i]!='\0') {
        if(napis[i]>='A' && napis[i]<='Z'){
            napis[i]+=32;
        }
        else if(napis[i-1]==' ' && napis[i]>='a' && napis[i]<='z'){
            napis[i]-=32;
        }
        i++;
    }
    if(napis[0]>='A' && napis[0]<='Z'){
        napis[0]+=32;
    }
    else if(napis[0]>='a' && napis[0]<='z'){
        napis[0]-=32;
    }
}
void zadanie13(){
    system("cls");

    char *napis1 = new char[100];
    char *napis2 = new char[100];

    cout << "Podaj swoje anagramenty: ";
    cin >> napis1 >> napis2;

    cout << "Twoje zdania jest anagramentami -> " << zad13_1(napis1,napis2) << endl;


    getchar();getchar();
    system("cls");
}
bool zad13_1(char *napis1, char *napis2){

    int i=0;
    while(napis1[i]!='\0'){
        int j=0,k=0,l=0;
        while (napis2[j]!='\0') {
            if(napis2[j]==napis1[i])k++;
            if(napis1[j]==napis1[i])l++;
            j++;
        }
        if(k!=l) return false;
        i++;
    }
    return true;

}
void zadanie14(){
    system("cls");

    char *napis = new char[100];
    cout << "Podaj liczbe z przedzialu od 1-25: ";
    int n; cin >> n;
    cout << "Podaj swoj napis, a ja go zaszyfruje: ";
    cin.ignore(100,'\n');
    cin.getline(napis,100);

    zad14_1(napis,n);
    delete [] napis;



    getchar();getchar();
    system("cls");

}
void zad14_1(char *napis, int n){
    int i=0;
    while (napis[i]!='\0') {
       if(napis[i]+n>'z'){
           napis[i]-=('z'-'a'-n+1);
       }
       else if(napis[i]+n<='z' && napis[i]+n>='a'){
           napis[i]+=n;
       }
       cout << napis[i];
       i++;
    }
    cout << endl;
}
void zadanie15(){
    system("cls");

    char *napis = new char[100];

    int n;
    cout << "Podaj ilosc liczer do tablicy: ";
    cin >> n;
    char tab[n];
    for(int i=0; i<n; i++){
        cout << "Podaj litery do tablicy: ";
        cin >> tab[i];
        cout << tab[i] << endl;
    }
    cout << endl;
    cin.ignore(100,'\n');
    cout << "Podaj napis: ";
    cin.getline(napis,100);

    zad15_1(napis,tab,n);
    int i=0;
    while (napis[i]!='\0') {
        cout << napis[i];
        i++;
    }
    cout << endl;

    getchar();getchar();
    system("cls");
}
void zad15_1(char *napis, char tablica[], int n){

    int j=0;
    for(int i=0; i<n; i++){
        while(napis[j]!='\0'){
            if(napis[j]==tablica[i]){
                napis[j]=' ';
            }
            j++;
        }
    j=0;
    }
}
void zadanie16(){
    system("cls");

    string napis;
    cout << "Podaj napis: ";
    cin >> napis;
    cout << "Ilosc par wynosi: " << zad16_1(napis)<<endl;

    getchar();getchar();getchar();
    system("cls");
}
int zad16_1(string napis){
    int i=0, par=0;
    while (napis[i+1]!='\0') {
        if(napis[i]>='a' && napis[i]<='z'){
            if(napis[i+1]==napis[i] || napis[i+1]==(napis[i]-32)){
                par++;
            }
        }
        else if(napis[i]>='A' && napis[i]<='Z'){
            if(napis[i+1]==napis[i] || napis[i+1]==(napis[i]+32)){
                par++;
            }
        }
        i++;
    }
    return par;
}
