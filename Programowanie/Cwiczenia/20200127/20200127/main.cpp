#include <iostream>
#include <time.h>
#include <string>
#include <cstring>

using namespace std;

class identyfikator2{
    int x;
public:
    identyfikator2(const identyfikator2 &zmienna){
        x=zmienna.x+1;
    }
    identyfikator2(int zmienna=0){
        this->x = zmienna;
    }
    unsigned int id(){
        ;
    }
    void wypisz(){
        cout << x;
    }

};
class semafor{
    bool wolny;
    semafor(bool zmiana=true){
        this->wolny=zmiana;
    }
    void rezerwuj(){
        this->wolny=false;
    }
    void zwolnij(){
        this->wolny=true;
    }
    bool stan(){
        return wolny;
    }
};
class Osoba{
    string imie, nazwisko;
public:
    Osoba(string im="brak",string naz="brak"){
        this->imie=im;
        this->nazwisko=naz;
    }
    void wczytaj(){
        cin >> this->imie;
        cin >> this->nazwisko;
    }
    void wypisz(){
        cout << "Twoje imie: " << imie << endl;
        cout << "Twoje nazwisko: " << nazwisko;
    }
};
class Piksel{
    unsigned char r,g,b;
public:
    Piksel(unsigned char red=0,unsigned char green=0,unsigned char bluee=0){
        this->r=red;
        this->g=green;
        this->b=bluee;
    }
    void odcien_szarosci(int v){
        if(r+v>255 || g+v>255 || b+v>255){
            r=g=b=255;
        }
        else if(r+v<0 || g+v<0 || b+v<0){
            r=g=b=0;
        }
        else{
            this->r+=v;
            this->g+=v;
            this->b+=v;
        }
    }
    ~Piksel(){
        cout << "Destruktor klasy Piksel" << endl;
    }
};
class Monitor{
    Piksel tablica[5][5];
    const string nazwa;
public:
    void zmien_odcien_szarosci(){
        cout << "Podaj ile jak dużą chcesz dodać wartość: ";
        int v; cin >> v;
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                tablica[i][j].odcien_szarosci(v);
            }
        }
    }
    Monitor(string nazwa):nazwa(nazwa){

    }
    ~Monitor(){
        cout << "Destruktor klasy monitor" << endl;
    }

};

class Gra{
    int a;
    double b;
    string c;
    Gra(int a){
        cout << "Konstruktor int";
    }
    Gra(double b){
        cout << "Konstruktor double";
    }
    Gra(string c){
        cout << "Konstruktor string";
    }
    ~Gra(){
        cout << "Destruktor ha ha ";
    }
};

class Student{
    char *imie;
    string nazwisko;
    double tablica[10];
    double srednia;

public:
    Student(char *imie, string nazwisko, double tablica[10]){
        for(int i=0; i<10; i++){
            this->tablica[i]=tablica[i];
            srednia+=tablica[i];
        }
        srednia/=10;
        this->nazwisko=nazwisko;
        this->imie = new char[strlen(imie)+1];
        strcpy(this->imie,imie);
    }
    void wypisz(){
        cout << "Twoje imie: " << imie << endl;
        cout << "Twoje nazwisko: " << nazwisko << endl;
        cout << "Twoje oceny: ";
        for(int i=0; i<10; i++){
            cout << tablica[i];
        }
        cout << endl << "Twoja srednia: " << srednia << endl;
    }
    ~Student(){
        delete [] this->imie;
    }
};

class Grupa{
private:
    const string nazwa;
    const int liczba_studentow;
    Student *lista[16];
public:
    Grupa(const string nazwa, const int liczba_studentow, Student *lista[16]):nazwa(nazwa),liczba_studentow(liczba_studentow),lista(lista){}

    void wypisz(){
        cout << "Nazwa klasy: " << nazwa << endl;
        cout << "Liczba studentow: "<< liczba_studentow << endl;
        for(int i=0; i<liczba_studentow; i++){
            lista[i]->wypisz();
        }
    }

};


int main()
{
    int tablica[10];
    srand(time(NULL));
    cout << "Tablica: ";
    for(int i=0;i<10;i++){
        tablica[i]=rand()%6+1;
        cout << tablica[i];
    }
    cout << endl << endl;
    Student s1();
    return 0;
}
