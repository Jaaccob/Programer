#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <time.h>
#include <cmath>

#define e 2.71828182
#define PI 3.141728

using namespace std;

void program1();    //Wyświetlanie programu 1
void fprogram1_1(); //Podprogram programu 1
void fprogram1_2(); //Podprogram programu 1
void program2();    //Wyświetlanie programu 2
void fprogram2_1(double *tab[], int n);  //Podprogram programu 2
void program3();    //Wyświetlanie programu 3
void fprogram3_1(int *tab, int n); //Podprogram programu 3
void program4();    //Wyświetlanie programu 4
void program5();    //Wyświetlanie programu 5


int main()              // Wyswietlanie nazw programu oraz dokonywanie wyboro spośród programów
{
    int wybor  =1;
    while(wybor!=0){
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

        cout << "1.Napisz program kt\242ry policzy niezale\276nie liczb\251 dni, godzin, minut i sekund jaka min\251\210 a od pocz\245tku semestru oraz " << endl;
        cout << "ile zostanie do ko\344ca semestru od dzisiejszego dnia. " << endl;
        cout << endl;

        cout << "2.Napisz funkcj\251 kt\242ra przyjmuje wska\253niki do dw\242ch tablic typu zmiennoprzecinkowego o rozmiarze n podanym w " << endl;
        cout << "argumencie. Funkcja przepisuje zawarto\230\206 pierwszej tablicy do drugiej ale w szczeg\242lny spos\242b. Je\230li element " << endl;
        cout << "pierwszej tablicy znajduje si\251 w przedziale [E -PI] lub je\230li pierwiastek elementu zawiera si\251 w przedziale (Logarytm" << endl;
        cout << "10 z E - Logarytm 2 z E] w\242wczas element przepisywany jest bez zmian. W przeciwnym wypadku przepisywany jest" << endl;
        cout << "logarytm naturalny z liczby 2" << endl;
        cout << endl;

        cout << "3.Napisz program kt\242ry obliczy czas w sekundach wykonania algorytmu sortowania b\245belkowego dla tablicy o rozmiarze " << endl;
        cout << "10 tys i pseudolosowo wygenerowanymi liczbami od 0 do 10 tys. " << endl;
        cout << endl;

        cout << "4.Napisz funkcj\251 kt\242ra otrzymuje liczb\251 ca\210kowit\245 nieujemn\245 n i prosi u\276ytkownika o wprowadzenie n liczb nie d\210u\276szych " << endl;
        cout << "ni\276 10 znak\242w do tablicy napis\242 w. Nast\251pnie zamienia liczby na ca\210kowite, sumuje i zwraca. Wszystkie liczby " << endl;
        cout << "ca\210kowite niech b\251d\245 nazwane calkowite, a znakowe -napisowe za pomoc\245 typedef" << endl;
        cout << endl;

        cout << "5.Korzystaj\245c z funkcji z biblioteki <algorithm> Stw\242rz tablic\251 n-elementow\245 (z liczbami ca\210 kowitymi 1-5) a nast\251pnie" << endl;
        cout << " skopiuj za pomoc\245 funkcji copy ca\210o\230\206 do drugiej tablicy o takim samym rozmiarze i wypisz na ekran za pomoc\245 funkcji " << endl;
        cout << "for_each. Stw\242rz trzeci\245 tablic\251 o rozmiarze dwukrotnie wi\251kszym a nast\251pnie scal ze sob\245 dwie tablice n-elementowe za " << endl;
        cout << "pomoc\245 funkcji merge.W tak otrzymanej tablicy odwr\242\206 kolejno\230\206 element\242 w drugiej po\210owy tablicy. Zmie\344 losowy " << endl;
        cout << "element na 10 i wyszukaj go za pomoc\245 bsearchi podw\242j jego warto\230\206." << endl;
        cout << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\n\n Jaki program chcesz wybrac?? Wypisz jego numer: (0 KONCZY DZIALANIE)"; cin >> wybor;

        switch (wybor) {
            case 1: program1(); break;
            case 2: program2(); break;
            case 3: program3(); break;
            case 4: program4(); break;
            case 5: program5(); break;
        }
    }
    return 0;
}


void program1(){
    system("cls");
    time_t czas = time(NULL);
    struct tm* aktualny_czas = localtime(&czas);

    cout << aktualny_czas->tm_year+1900 << " Rok" << endl;
    cout << aktualny_czas->tm_mon+1 << " Miesiac" << endl;
    cout << aktualny_czas->tm_mday << " Dzien" << endl;
    cout << aktualny_czas->tm_hour << " Godzina" << endl;
    cout << aktualny_czas->tm_min << " Minuta" << endl;
    cout << aktualny_czas->tm_sec << " Sekunda" << endl;
    cout << endl << endl;
    fprogram1_1();
    fprogram1_2();


    getchar();getchar();
    system("cls");

}
void fprogram1_1(){
    time_t now =time(NULL);
    struct tm beg =*localtime(&now);
    beg.tm_year=119;
    beg.tm_mon=9; //Ponieważ tm_mon[0-11]
    beg.tm_mday=1;
    beg.tm_hour=9; //Ponieważ tm_hour[0-23]
    beg.tm_min=0;
    beg.tm_sec=0;
    time_t today_sec = mktime(&beg);

    int sekundy = difftime(now, today_sec );
    int dni,godziny,minuty;
    cout << "Ilosc sekund: " << sekundy << endl;
    minuty=sekundy/60;
    sekundy=sekundy-(minuty*60);
    cout << "Ilosc minut: " << minuty << endl;
    godziny=minuty/60;
    minuty=minuty-(godziny*60);
    cout << "Ilosc godzin: " << godziny << endl;
    dni=godziny/24;
    godziny=godziny-(dni*24);

    cout << "Czas ktory uplynal od rozpoczecia semestru. Dni: " << dni << ", godziny: " << godziny << ", minuty: " << minuty << ", sekundy: " << sekundy << endl;
}
void fprogram1_2(){
    time_t czas = time(NULL);
    struct tm beg =*localtime(&czas);

    beg.tm_year=120;
    beg.tm_mon=1;
    beg.tm_mday=23;

    time_t today_sec = mktime(&beg);

    int second = difftime(today_sec, czas);
    int dni,godziny,minuty;
    cout << "Ilosc sekund: " << second << endl;
    minuty=second/60;
    second=second-(minuty*60);
    cout << "Ilosc minut: " << minuty << endl;
    godziny=minuty/60;
    minuty=minuty-(godziny*60);
    cout << "Ilosc godzin: " << godziny << endl;
    dni=godziny/24;
    godziny=godziny-(dni*24);

    cout << "Dni ktore zostaly do zakonczenia semestru : " << dni << endl;
}
void program2(){
    system("cls");

    cout << "Podaj jak wielka ma byc twoja tablica: "; int n; cin >> n;

    double **tab = new double*[2];
    for(int i=0; i<2; i++){
        tab[i] = new double[n];
    }
    srand(time(NULL));
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            tab[i][j]=rand()%2+(3.54*0.843)+rand()%2*(0.23*0.31345);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            cout << "[" << tab[i][j] << "],";
        }
        cout << endl;
    }

    fprogram2_1(tab,n);

    for(int i=0; i<2; i++){
        delete[] tab[i];
    }
    delete [] tab;


    getchar();getchar();
    system("cls");
}
void fprogram2_1(double *tab[], int n){
    double **tab1 = new double*[2];
    for(int i=0; i<2; i++){
        tab1[i] = new double[n];
    }

    for(int i=0,j=0; i<2; i++,j++){
        for(int k=0,l=0; k<n; k++,l++){
            if(tab[i][k]>e && tab[i][k]<PI){
                tab1[j][l]=tab[i][k];
            }
            else tab1[j][l] = log(2);
        }
    }
    cout << endl << endl;



    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            cout << "[" << tab1[i][j] << "],";
        }
        cout << endl;
    }
    for(int i=0; i<2; i++){
        delete[] tab1[i];
    }
    delete [] tab1;
}
void program3(){
    system("cls");

    int tab[10000];
    srand(time(NULL));
    for(int i=0; i<10000; i++){
        tab[i]=rand()%10001;
        cout << "[" << tab[i] << "],";
    }
    int *wskaznik = tab;
    fprogram3_1(wskaznik,10000);

    getchar();getchar();
    system("cls");
}
void fprogram3_1(int *tab, int n){                  //Sortowanie bąbelkowe
    clock_t start = clock();
    for (int i=1; i<n; i++){
         for (int j=n-1; j>=1; j--){
             if (tab[j]<tab[j-1]){
                 int bufor;
                 bufor=tab[j-1];
                 tab[j-1]=tab[j];
                 tab[j]=bufor;
             }
         }
     }
    cout << "\n\nPosortowana tablica wyglada tak: ";
    for(int i=0; i<n; i++){
        cout << "[" << tab[i] << "],";
    }
    cout << endl;
    clock_t end = clock();
    double cpu_time = ((double)(end-start))/CLOCKS_PER_SEC;
    cout << "Sortowanie trwalo " << cpu_time << " sekund" << endl;
}

void program4(){
    system("cls");
    typedef int calkowite;
    typedef char napisowe;

    cout << "Podaj ile liczb chcesz mi podac: ";  calkowite n; cin >> n;
    napisowe tablica[n];
    for(calkowite i=0; i<n; i++){
        cout << "Podaj mi " << i+1 << " liczbe (nie dluzsza niz 10 znakow): "; cin >> tablica[i];
    }
    calkowite suma=0;
    for(calkowite i=0; i<n; i++){
        suma+=(calkowite)tablica[i];
    }
    cout << "Suma twoich liczb wynosi: " << suma << endl;


    getchar();getchar();
    system("cls");
}
void program5(){
    cout << "DZIALA";
}
