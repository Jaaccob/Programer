#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;

void program1();
void program2();
void program3();
void program4();
void program5();
void program6();
void program7();
void program8();
void program9();
void program10();
void program11();
void program12();
void program13();
void program14();
void fprogram1(int **tab, int x, int y);
void fprogram3(int **tab, int x, int y);
int fprogram5(int **tab, int x, int y);
int fprogram6(int ***tab, int x, int y, int z);
int fprogram8(int **tab, int x, int y);
void fprogram9(int **tab, int x, int y , int **wsk);
void fprogram10(int **tab1, int **tab2, int x1, int y1, int x2, int y2);
void fprogram11(int **tab,int x, int y);
void fprogram13(int **tab, int x, int y);

int main()
{
    int wybor=1;
    while(wybor!=0){
        cout << "----------------------------------------------------------------------------------------------------------------" << endl<< endl;
        cout << "1.Stw\211rz dwuwymiarow\177 tablic\202 automatyczn\177, podstaw dowolne warto\166ciz przedzia\163u <0,9> i \n"
                "wy\166wietl na ekranzachowuj\177c wygl\177d wierszy i kolumn" << endl<< endl;

        cout << "2.Zaalokuj pami\202\230 na tablic\202 dwuwymiarow\177, podstaw dowolne liczby z przedzia\163u 0-9(nie musi "
                "by\230 pseudolosowo) , wy\166wietl i zwolnij pami\202\230." << endl<< endl;
        cout << "3.Napisz funkcj\202, kt\211ra dostaje w argumentach dwuwymiarow\177 tablic\202 element\211w typu int, o \n"
                "pierwszym wymiarze podanym jako drugi argument funkcji oraz drugim wymiarze r\211wnym 100 i wype\163nia j\177 "
                "zerami. (automatycznie)" << endl<< endl;
        cout << "4.Napisz funkcj\202, kt\211ra dostaje w argumentach dwuwymiarow\177 tablic\202 tablic element\211w typu int oraz \n"
                "jej wymiary n, m i wype\163niaj\177 zerami. (dynamicznie)" << endl<< endl;

        cout << "5.Napisz funkcj\202, kt\211ra dostaje w argumentach dwuwymiarow\177 tablic\202 tablic o elementach typu int \n"
                "oraz jej wymiary n, m,i zwracajako warto\166\230 sum\202 warto\166ci element\211w tablicy. (dynamicznie)" << endl<< endl;

        cout << "6.Napisz funkcj\202, kt\211ra dostaje w argumentach tablic\202 tr\211jwymiarow\177 o elementach typuinto \n"
                "wymiarach 5x5x5zwraca jako warto\166\230sum\202 warto\166ci element\211w tablicy. (dynamicznie)" << endl<< endl;

        cout << "7.Napisz zadanie4 z wykorzystaniem tablicy automatycznej(automatycznie)" << endl<< endl;

        cout << "8.Napisz funkcj\202, kt\211ra dostaje w argumentach dwuwymiarow\177 tablic\202 tablic o elementach typu int oraz \n"
                "jej wymiary n, m,i zwracajako warto\166\230 najwi\202ksz\177 spo\166r\211d warto\166ci przechowywanych w tablicy"
                "(dynamicznie)" << endl<< endl;

        cout << "9.Napisz funkcj\202, kt\211ra dostaje jako argumenty dwie dwuwymiarowe tablice tablic o elementach typu int oraz \n"
                "ich wymiary iprzepisuje zawarto\166\230 pierwszej tablicy do drugiej tablicy.(dynamicznie)" << endl<< endl;

        cout << "10.Napisz funkcj\202, kt\211ra dostaje jako argumenty dwie dwuwymiarowe tablice tablic o elementach typu int oraz \n"
                "ich wymiary izamienia zawarto\166ci obu tablic.(dynamicznie)" << endl<< endl;

        cout << "11.Napisz funkcj\202, kt\211ra dostaje jako argumenty dwuwymiarow\177 tablic\202 tablic o elementach typu int oraz \n"
                "jej wymiary i odwracakolejno\166\230 element\211w we wszystkich kolumnach tablicy (przyjmujemy, \175e dwa elementy \n"
                "tablicy le\175\177 w tej samej kolumnie je\175elimaj\177 tak\177 sam\177 pierwsz\177 wsp\211\163rz\202dn\177)."
                "(dynamicznie)" << endl<< endl;

        cout << "12.Napisz funkcj\202, kt\211ra dostaje jako argumenty dwuwymiarow\177 tablic\202 tablic o elementach typu int oraz \n"
                "jej wymiary i zmieniakolejno\166\230 wierszy w tablicy w taki spos\211b, \175e wiersz pierwszy ma si\202 znale\172\230 \n"
                "na miejscu drugiego, wiersz drugi ma si\202znale\172\230 na miejscu trzeciego itd. natomiastostatni wiersz ma si\202 \n"
                "znale\172\230 na miejscu pierwszego (przyjmujemy, \175e dwa elementytablicy le\175\177 w tym samym wierszu je\175eli \n"
                "maj\177 tak\177 sam\177 drug\177 wsp\211\163rz\202dn\177).(dynamicznie)" << endl<< endl;

        cout << "13.Napisz funkcj\202, kt\211ra dostaje jakoargumenty dwuwymiarow\177 tablic\202 tablic o elementach typu int orazjej \n"
                "wymiary i zwraca jako warto\166\230 indeks kolumny o najwi\202kszej \166redniej warto\166ci element\211w.(dynamicznie)" << endl<< endl;

        cout << "14.Napisz funkcj\202, kt\211ra dostaje jako argumenty dwuwymiarow\177 kwadratow\177 tablic\202 tablic tab o elementach \n"
                "typu int oraz jejwymiar i zmienia kolejno\166\230 element\211w w otrzymanej tablicy w nast\202puj\177cy spos\211b: \n"
                "dla dowolnych i i j element tab[i][j] mazosta\230 zamieniony miejscami z elementem tab[j][i].(dynamicznie)" << endl<< endl;

        cout << "" << endl;
        cout << "" << endl;
        cout << "----------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Ktory program chcesz uruchomic" << endl;

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
        case 12: program12(); break;
        case 13: program13(); break;
        case 14: program14(); break;

        }
    }
    system("cls");
    return 0;
}

void program1(){
    system("cls");
    int x,y;
    cout << "Jak duza chcesz tablice 2-wybiarowa.Podaj x: "; cin >> x; cout << "Podaj y: "; cin >>y;
    int **tab = new int *[y];
    for(int i=0;i<y;i++){
        tab[i]=new int[x];
    }
    fprogram1(tab,x,y);
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    for(int i=0; i<y; i++){
        delete [] tab[i];
    }
    delete [] tab;
    system("pause");
    system("cls");
}
void fprogram1(int **tab, int x, int y){
    srand(time(NULL));
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            tab[i][j] = rand()%10;
        }
    }
}
void program2(){
    system("cls");
    int x,y;
    cout << "Jak duza chcesz tablice 2-wybiarowa.Podaj x: "; cin >> x; cout << "Podaj y: "; cin >>y;
    int **tab = new int *[y];
    for(int i=0;i<y;i++){
        tab[i]=new int[x];
    }
    fprogram1(tab,x,y);
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    for(int i=0; i<y; i++){
        delete [] tab[i];
    }
    delete [] tab;
    system("pause");
    system("cls");
}
void program3(){
    system("cls");
    int x,y=100;
    cout << "Jak duza chcesz tablice 2-wybiarowa.Podaj x: "; cin >> x;
    int **tab = new int *[y];
    for(int i=0;i<y;i++){
        tab[i]=new int[x];
    }
    fprogram3(tab,x,y);
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    for(int i=0; i<y; i++){
        delete [] tab[i];
    }
    delete [] tab;
    system("pause");
    system("cls");
}
void fprogram3(int **tab, int x, int y){
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            tab[i][j] = 0;
        }
    }
}
void program4(){
    system("cls");
    int x,y=100;
    cout << "Jak duza chcesz tablice 2-wybiarowa.Podaj x: "; cin >> x;
    int **tab = new int *[y];
    for(int i=0;i<y;i++){
        tab[i]=new int[x];
    }
    fprogram3(tab,x,y);
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    for(int i=0; i<y; i++){
        delete [] tab[i];
    }
    delete [] tab;
    system("pause");
    system("cls");
}
void program5(){
    system("cls");
    int x,y;
    cout << "Jak duza chcesz tablice 2-wybiarowa.Podaj x: "; cin >> x; cout << "Podaj y: "; cin >> y;
    int **tab = new int *[y];
    for(int i=0;i<y;i++){
        tab[i]=new int[x];
    }
    cout << "Suma elementow w mojej tablicy wynosi: " << fprogram5(tab,x,y) << endl;
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    for(int i=0; i<y; i++){
        delete [] tab[i];
    }
    delete [] tab;
    system("pause");
    system("cls");
}
int fprogram5(int **tab, int x, int y){
    int suma=0;
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            tab[i][j] = rand()%10;
            suma+=tab[i][j];
        }
    }
    return suma;

}
void program6(){
    system("cls");
    int x,y,z;
    cout << "Jak duza chcesz tablice 3-wybiarowa.Podaj x: "; cin >> x; cout << "Podaj y: "; cin >> y; cout << "Podaj z: "; cin >> z;
    int ***tab = new int **[y];
    for(int i=0;i<y;i++){
        tab[i]=new int*[x];
        for(int j=0; j<x; j++){
            tab[i][j] = new int [z];
        }
    }
    cout << "Suma twoich elementow wynosi: " << fprogram6(tab,x,y,z) << endl;
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            for(int k=0; k<z; k++){
                cout << tab[i][j][k] << ",";
            }
        }
    }
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            delete [] tab[i][j];
        }
    }
    for(int i=0; i<y; i++){
        delete [] tab[i];
    }
    delete [] tab;
    system("pause");
    system("cls");
}
int fprogram6(int ***tab, int x, int y, int z){
    srand(time(NULL));
    int suma=0;
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            for(int k=0; k<z; k++){
                tab[i][j][k] = rand()%10;
                suma+=tab[i][j][k];
            }
        }
    }
    return suma;
}
void program7(){
    system("cls");
    int x,y=100;
    cout << "Jak duza chcesz tablice 2-wybiarowa.Podaj x: "; cin >> x;
    int **tab = new int *[y];
    for(int i=0;i<y;i++){
        tab[i]=new int[x];
    }
    fprogram3(tab,x,y);
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    for(int i=0; i<y; i++){
        delete [] tab[i];
    }
    delete [] tab;
    system("pause");
    system("cls");
}
void program8(){
    system("cls");
    int x,y;
    cout << "Jak duza chcesz tablice 2-wybiarowa.Podaj x: "; cin >> x; cout << "Podaj y: "; cin >>y;
    int **tab = new int *[y];
    for(int i=0;i<y;i++){
        tab[i]=new int[x];
    }
    cout << "Najwiekszy element w tabalicy wynosi: " << fprogram8(tab,x,y) << endl;
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    for(int i=0; i<y; i++){
        delete [] tab[i];
    }
    delete [] tab;
    system("pause");
    system("cls");
}
int fprogram8(int **tab, int x, int y){
    srand(time(NULL));
    int najwiekszy=0;
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            tab[i][j] = rand()%10;
            if(najwiekszy<tab[i][j]) najwiekszy=tab[i][j];
        }
    }
    return najwiekszy;

}
void program9(){
    system("cls");
    int x,y;
    cout << "Jak duza chcesz tablice 2-wybiarowa.Podaj x: "; cin >> x; cout << "Podaj y: "; cin >>y;
    int **tab = new int *[y];
    int **wsk = new int *[y];
    for(int i=0;i<y;i++){
        tab[i]=new int[x];
        wsk[i]=new int[x];
    }
    fprogram9(tab,x,y,wsk);
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    cout << endl << endl << endl;
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << wsk[i][j] << ",";
        }
        cout << endl;
    }
    for(int i=0; i<y; i++){
        delete [] tab[i];
        delete [] wsk[i];
    }
    delete [] tab;
    delete [] wsk;
    system("pause");
    system("cls");
}
void fprogram9(int **tab, int x, int y, int **wsk){
    srand(time(NULL));
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            tab[i][j] = rand()%10;
        }
    }
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            wsk[i][j]=tab[i][j];
        }
    }
}
void program10(){
    system("cls");
    int x1,y1,x2,y2;
    cout << "Stworze 2 tablice. Podaj ich wielkość. Podaj x1: "; cin >> x1; cout << "Podaj y1: "; cin >> y1;
    cout << "Podaj x2: "; cin >> x2; cout << "Podaj y2: "; cin >> y2;

    int **tab1 = new int *[y1];
    for(int i=0; i<y1; i++){
        tab1[i] = new int [x1];
    }
    int **tab2 = new int *[y2];
    for(int i=0; i<y2; i++){
        tab2[i] = new int [x2];
    }

    srand(time(NULL));
    for(int i=0; i<y1; i++){
        for(int j=0; j<x1; j++){
            tab1[i][j]=rand()%10;
        }
    }
    for(int i=0; i<y2; i++){
        for(int j=0; j<x2; j++){
            tab2[i][j]=rand()%10;
        }
    }
    cout << "Tablica 1: " << endl;
    for(int i=0; i<y1; i++){
        for(int j=0; j<x1; j++){
            cout << tab1[i][j] << ",";
        }
        cout << "\n";
    }
    cout << "Tablica 2: " << endl;
    for(int i=0; i<y2; i++){
        for(int j=0; j<x2; j++){
            cout << tab2[i][j] << ",";
        }
        cout << "\n";
    }
    fprogram10(tab1,tab2,x1,y1,x2,y2);
    for(int i=0; i<y1; i++){
        delete [] tab1[i];
    }
    for(int i=0; i<y2; i++){
        delete [] tab2[i];
    }
    delete [] tab1;
    delete [] tab2;
    system("pause");
    system("cls");
}
void fprogram10(int **tab1, int **tab2, int x1, int y1, int x2, int y2){
    for(int i=0, k=0; i<y1, k<y2; i++ , k++){
        for(int j=0, l=0; j<x1, l<x2; j++, l++){
            tab1[i][j]=tab1[i][j]-tab2[k][l];
            tab2[k][l]=tab2[k][l]+tab1[i][j];
            tab1[i][j]=tab2[k][l]-tab1[i][j];
        }
    }
    cout << "Po zamianie miejscami tablice wygladaja tak: " << endl;
    cout << "Tablica 1: " << endl;
    for(int i=0; i<y1; i++){
        for(int j=0; j<x1; j++){
            cout << tab1[i][j] << ",";
        }
        cout << "\n";
    }
    cout << "Tablica 2: " << endl;
    for(int i=0; i<y2; i++){
        for(int j=0; j<x2; j++){
            cout << tab2[i][j] << ",";
        }
        cout << "\n";
    }
}
void program11(){
    system("cls");
    int x,y;
    cout << "Stworze tablice. Podaj jej wielkość. Podaj x: "; cin >> x; cout << "Podaj y: "; cin >> y;

    int **tab1 = new int *[y];
    for(int i=0; i<y; i++){
        tab1[i] = new int [x];
    }

    srand(time(NULL));
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            tab1[i][j]=rand()%10;
        }
    }

    cout << "Tablica 1: " << endl;
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab1[i][j] << ",";
        }
        cout << "\n";
    }

    fprogram11(tab1,x,y);
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab1[i][j] << ",";
        }
        cout << endl;
    }
    for(int i=0; i<y; i++){
        delete [] tab1[i];
    }
    delete [] tab1;
    system("pause");
    system("cls");
}
void fprogram11(int **tab,int x, int y){

    int **zamiana = new int *[y];
    for(int i=0; i<y; i++){
        zamiana[i]= new int[x];
    }

    for(int i=0,k=y; i<y, k>0; i++,k--){
        for(int j=0,l=0; j<x, l<x; j++,l++)
            zamiana[k-1][l]=tab[i][j];
    }
    cout << "Tablica zamieniona kolejnoscia:" << endl;


    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            tab[i][j]=zamiana[i][j];
        }
    }


    for(int i=0; i<y; i++){
        delete [] zamiana[i];
    }
    delete [] zamiana;


}
void program12(){

}
void program13(){
    system("cls");
    int x,y;
    cout << "Jak duza chcesz tablice 2-wybiarowa.Podaj x: "; cin >> x; cout << "Podaj y: "; cin >>y;
    int **tab = new int *[y];
    for(int i=0;i<y;i++){
        tab[i]=new int[x];
    }
    srand(time(NULL));

    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            tab[i][j]=rand()%10+1;
        }
    }

    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    fprogram13(tab,x,y);
    for(int i=0; i<y; i++){
        delete [] tab[i];
    }
    delete [] tab;
    system("pause");
    system("cls");
}
void fprogram13(int **tab, int x, int y){
    int avg1,avg2;
    int kolumna = 0;
    for(int i=0; i<y; i++){
        avg1+=tab[i][0];
    }
    avg1=(avg1/y);
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            avg2+=tab[j][i];
        }
        if((avg2/y)>avg1) avg1=avg2/y; kolumna=i;
    }
    cout << "Indeks kolumn o najwiekszej sredniej: " << endl;
    for(int i=0; i<x; i++){
        cout << "a" << kolumna << i << ",";
    }

}
void program14(){

}
