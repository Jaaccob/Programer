#include<cstdio>
#include<ctime>
#include<cmath>


/*int main(){
    time_t t =time(NULL);
    struct tm* ct =localtime(&t);

    //dostep bezposredni do skladowych strktury kalendarza
    printf("%d-%d-%d %d:%d:%d\n", 1900+ct->tm_year,
           1+ct->tm_mon, ct->tm_mday, ct->tm_hour,
           ct->tm_min, ct->tm_sec);

    //3 funkcje konwersji czasu na string:
    printf("%s\n", ctime(&t));
    printf("%s\n", asctime(ct));

    char buff[128];
    strftime(buff, sizeof(buff), "%Y-%m-%d %0H:%0M:%0S", ct);
    printf("%s\n", buff);







    time_t now =time(NULL);
    struct tm beg =*localtime(&now);
    beg.tm_hour =0;
    beg.tm_min =0;
    beg.tm_sec =0;
    time_t today_sec = mktime(&beg);

    double seconds = difftime(now,today_sec);
    printf("Dzisiaj uplynelo %.f sekund.\n", seconds);

    beg =*localtime(&now);
    beg.tm_mon -=100;
    mktime(&beg);
    printf("100 miesiecy temu byl %s", asctime(&beg));


    clock_t start = clock();

    double ft = 10000;
    for(size_t i=0; i<10000000; ++i)
        ft = sqrt(ft);

    clock_t end = clock();
    double cpu_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("petla trwala %f sekund\n", cpu_time);


    return 0;
}*/
/*
#include "stdio.h"

//tablica z nazwami dni tygodnia
char *tydzien[] =
{"poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota", "niedziela"};

//tablica z liczba dni od początku roku (nieprzestepnego) dla kolejnych miesiecy
int liczbaDni[] =
{0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

//1 jezeli podany rok jest przestepny,
//0 w przeciwnym wypadku
int przestepny(int rok) {
return ((rok % 4 == 0  &&  rok % 100 != 0) || rok % 400 == 0);
}

//dla podanej daty wyznacza dzien tygodnia
//0 - poniedziałek, 1 - wtorek, ... 6 - niedziela
int dzienTygodnia(int dzien, int miesiac, int rok) {
int dzienRoku;
int yy, c, g;
int wynik;

dzienRoku = dzien + liczbaDni[miesiac-1];
if ((miesiac > 2) && (przestepny(rok) == 1))
dzienRoku++;

yy = (rok - 1) % 100;
c = (rok - 1) - yy;
g = yy + (yy / 4);
wynik = (((((c / 100) % 4) * 5) + g) % 7);
wynik += dzienRoku - 1;
wynik %= 7;

return wynik;
}

//pobiera dane od uzytkownika, oblicza dzien tygodnia
int main() {
int m, r, d, wynik;

printf("Podaj dla jakiej daty obliczyc dzien tygodnia.\n");

printf("Podaj dzien:\n");
scanf("%d", &d);
printf("Podaj miesiac:\n");
scanf("%d", &m);
printf("Podaj rok:\n");
scanf("%d", &r);

wynik = dzienTygodnia(d, m, r);
printf("Dzien tygodnia dla podanej daty to %s.\n", tydzien[wynik]);





return 0;
}*/

// string::erase
/*
#include <iostream>
#include <string>

int main ()
{
  std::string str ("This is an example sentence.");
  std::cout << str << '\n';
                                           // "This is an example sentence."
  str.erase (10,8);                        //            ^^^^^^^^
  std::cout << str << '\n';
                                           // "This is an sentence."
  str.erase (str.begin()+9);               //           ^
  std::cout << str << '\n';
                                           // "This is a sentence."
  str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
  std::cout << str << '\n';
                                           // "This sentence."
  return 0;
}*/

// CPP program to illustrate
// Different methods to find length
// of a string
#include<string.h>
#include<iostream>
/*
using namespace std;

int main()
{

    // String obj

    string str = "GeeksforGeeks";



    // 1. size of string object using size() method

    cout << str.size() << endl;



    // 2. size of string object using length method

    cout << str.length() << endl;



    // 3. size using old style

    // size of string object using strlen function

    cout << strlen(str.c_str()) << endl;



    // The constructor of string will set it to the C-style string,

    // which ends at the '\0'



    // 4. size of string object Using while loop

    int i = 0;

    while (str[i] != '\0')

    {

        ++i;

    }

    cout << i << endl;



    // 5. size of string object using for loop

    for (i=0; str[i]!='\0'; i++)

    {

    }

    cout << i << endl;



return 0;
}*/
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void Zad1()
{
    string str;
    cin >> str;
    cout << str.length() << endl;
}

void Zad2()
{
    string str;
    cin >> str;
    char napis[str.length()];
    unsigned long k=0;
    for (unsigned long i=str.length()-1; i>=0; i--)
    {
        napis[k]=str[i]; k++;
    }
    for (unsigned long i=0; i<str.length(); i++)
    {
        cout << napis[i];
    }
    cout << endl;
}

void Zad3()
{
    string napis;
    cin >> napis;
    unsigned long k=napis.length()-1, x=0;
    if(napis.length()%2==0)
    {
        for (unsigned long i=0; i<(napis.length()/2); i++)
        {
            if(napis[i]!=napis[k]) x++;
            k--;
        }
    }
    else
    {
        for (unsigned long i=0; i<((napis.length()-1)/2); i++)
        {
            if(napis[i]!=napis[k]) x++;
            k--;
        }
    }
    if(x==0) cout << "1" << endl;
    else cout << "0" << endl;
}

void Zad4()
{
    string str;
    cin >> str;
    getline(cin, str);
    unsigned long k=0;
    for (unsigned long i=0; i<str.length()-1; i++)
    {
        if(str[i]==' ') k++;
    }
    cout << k+1 << endl;
}

void Zad5F(string *str, int n)
{
    str->substr(0,n);
}

void Zad5()
{
    string str;
    int n;
    cout << "Napis: ";
    cin >> str;
    cout << "Liczba: ";
    cin >> n;
    string *str2=&str;
    Zad5F(str2,n-1);
    cout << *str2 << endl;
}

void Zad6()
{
    string str;
    cin >> str;
    for (int i=0; str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
            cout << str[i];
        }
    }
}

bool Zad7F(string str, string str2)
{
    bool wynik=true;
    for (int i=0; i<str.length(); i++)
    {
        if (str[i]!=str2[i]) wynik = false;
    }
    return wynik;
}
void Zad7()
{
    string str,str2;
    cin >> str;
    cin >> str2;
    cout << Zad7F(str,str2) << endl;
}

void Zad8F(string & nap1, string & nap2)
{
    for (int i=0; i<nap1.length(); i++)
    {
        if(nap1[i]==nap2[i])
        {
            nap1.erase (i,1);
        }
    }
}
void Zad8()
{
    string nap1;
    string nap2;
    cin >> nap1;
    cin >> nap2;
    Zad8F(nap1,nap2);
    for (int i=0; i<nap1.length(); i++)
    {
        cout << nap1[i];
    }
    cout << endl;
}

void Zad9F(string nap_1, string nap_2, string *nap_3)
{
    *nap_3+=(nap_1+nap_2);
}
void Zad9()
{
    string nap_1,nap_2;
    string *nap_3=new string;
    cin >> nap_1 >> nap_2;
    Zad9F(nap_1,nap_2,nap_3);
    cout << *nap_3 << endl;
}

void Zad10()
{
    string nap1,nap2,nap3;
    cin >> nap1 >> nap2;
    int dlugosc, k=0;
    if(nap1.length()<nap2.length()) dlugosc=2*(nap1.length());
    else dlugosc=2*(nap2.length());
    for (int i=0; i<dlugosc; i++)
    {
        if(i%2==0) nap3[i]=nap1[k];
        else {nap3[i]=nap2[k]; k++;}
        cout << nap3[i];
    }
    cout << endl;
}

void Zad11F(char *napis, char *sms)
{
    int i=0, k=0;
    while(napis[i]!='\0')
    {
        sms[k]=napis[i];
        if(napis[i]==' ' && napis[i+1]>='a' && napis[i+1]<='z')
        {
            sms[k]=napis[i+1]-32;
            i++;
        }
        i++;
        k++;
    }
    sms[0]=napis[0]-32;
}
void Zad11()
{
    int i=0;
    char *napis2=new char [100];
    char *napis1=new char [100];
    cin.ignore();
    cin.getline(napis1,100);
    Zad11F(napis1,napis2);
    while (napis2[i]!='\0')
    {
        cout << napis2[i];
        i++;
    }
    cout << endl;
    delete [] napis2;
    delete [] napis1;
}

void Zad12F(string napis)
{
    int i=1;
    if(napis[0]>='A' && napis[0]<='Z')                          napis[0]+=32;
    else if(napis[0]>='a' && napis[0]<='z')                          napis[0]-=32;
    cout << napis[0];
   while(napis[i]!='\0')
   {
       if(napis[i]>='A' && napis[i]<='Z')                       napis[i]+=32;
       else if(napis[i]>='a' && napis[i]<='z' && napis[i-1]==' ')    napis[i]-=32;
       i++;
       cout << napis[i-1];
   }
}
void Zad12()
{
    cin.ignore(26, '\n');
    string napis;
    getline(cin,napis);
    Zad12F(napis);
    cout << endl;
}

bool Zad13F(char *nap1, char *nap2)
{
    int i=0, j=0, k=0, l=0;
    while(nap1[i]!='\0')
    {
        k=0;
        l=0;
        j=0;
        while(nap2[j]!='\0')
        {
            if(nap2[j]==nap1[i]) k++;
            if(nap1[j]==nap1[i]) l++;
            j++;
        }
        if(k!=l) return false;
        i++;
    }
    return true;
}
void Zad13()
{
    char *nap1, *nap2;
    nap1=new char[100];
    nap2=new char[100];
    cin >> nap1 >> nap2;
    cout << Zad13F(nap1,nap2) << endl;
    delete [] nap1;
    delete [] nap2;
}

void Zad14F(char *napis, int n)
{
    int i=0;
    while(napis[i]!='\0')
    {
        if(napis[i]+n>'z') napis[i]-=('z'-'a'-n+1);
        else if(napis[i]+n<='z' && napis[i]>='a') napis[i]+=n;
        cout << napis[i];
        i++;
    }
}
void Zad14()
{
    char *napis=new char[100];
    int n;
    do
    {
    cout << "Podaj wspolczynnik przesuniecia [przedzial od 1 do 25]: ";
    cin >> n;
    }
    while(n>25 || n<1);
    cin.ignore(100,'\n');
    cin.getline(napis,100);
    Zad14F(napis,n);
    cout << endl;
    delete [] napis;
}

void Zad15F(string & napis, char del[], int n)
{
    int j=0;
    for(int i=0; i<n; i++)
    {
        j=0;
        while(napis[j]!='\0')
        {
            if(napis[j]==del[i]) napis[j]=' ';
            j++;
        }
    }
    int i=0;
    while(napis[i]!='\0')
    {
        cout << napis[i];
        i++;
    }
    cout << endl;
}
void Zad15()
{
    string napis;
    int n;
    cout << "Podaj ilosc liter: " << endl;
    cin >> n;
    char del[n];
    cout << "Podaj litery: " << endl;
    cin >> del;
    cin.ignore(100,'\n');
    cout << "Podaj napis: " << endl;
    getline(cin, napis);
    Zad15F(napis,del,n);
}

int Zad16F(string napis)
{
    int i=0, pary=0;
    while(napis[i+1]!='\0')
    {
        if(napis[i]>='a' && napis[i]<='z')
        {
            if(napis[i+1]==napis[i] || napis[i+1]==napis[i]-('a'-'A')) pary++;
        }
        else if(napis[i]>='A' && napis[i]<='Z')
        {
            if(napis[i+1]==napis[i] || napis[i+1]==napis[i]-('A'-'a')) pary++;
        }
        i++;
    }
    return pary;
}
void Zad16()
{
    string napis;
    cin >> napis;
    cout << Zad16F(napis) << endl;
}

void Zad17F(string liczba)
{
    int i=0, suma=0;;
     char *cyfra=new char;
    while(liczba[i]!='\0')
    {
        *cyfra=liczba[i];
        i++;
        suma+=atoi(cyfra);
    }
     cout << suma;
     delete cyfra;
}
void Zad17()
{
    string liczba;
    cout << "Podaj liczbe: " << endl;
    cin >> liczba;
    Zad17F(liczba);
    cout << endl;
}

int main()
{
    cout << "1: Zad1" << endl << "2: Zad2 " << endl << "3: Zad3"
            << endl << "4: Zad4" << endl << "5: Zad5" << endl
            << "6: Zad6" << endl << "7: Zad7" << endl << "8: Zad8"
            << endl << "9: Zad9" << endl << "10: Zad1/2" << endl
            << "11: Zad2/2" << endl << "12: Zad3/2" << endl <<
            "13: Zad4/2" << endl << "14: Zad5/2" << endl <<
            "15: Zad6/2" << endl << "16: Zad7/2" << endl << "17: Zad8/2"
            << endl << "18: Zad9/2" << endl;

    int x;
    cin >> x;
    switch(x)
    {
        case 1:
        {
            Zad1();
            break;
        }
        case 2:
        {
            Zad2();
            break;
        }
        case 3:
        {
            Zad3();
            break;
        }
        case 4:
        {
            Zad4();
            break;
        }
        case 5:
        {
            Zad5();
            break;
        }
        case 6:
        {
            Zad6();
            break;
        }
        case 7:
        {
            Zad7();
            break;
        }
        case 8:
        {
            Zad8();
            break;
        }
        case 9:
        {
            Zad9();
            break;
        }
        case 10:
        {
            Zad10();
            break;
        }
        case 11:
        {
            Zad11();
            break;
        }
        case 12:
        {
            Zad12();
            break;
        }
        case 13:
        {
            Zad13();
            break;
        }
        case 14:
        {
            Zad14();
            break;
        }
        case 15:
        {
            Zad15();
            break;
        }
        case 16:
        {
            Zad16();
            break;
        }
        case 17:
        {
            Zad17();
            break;
        }
    }
    return 0;
}
