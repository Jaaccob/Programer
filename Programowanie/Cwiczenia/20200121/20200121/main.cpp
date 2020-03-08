#include <iostream>


using namespace std;

class Poczta{
public:
    string nadawca,odbiorca,temat,tresc;

    void wczytaj();
    void wypisz();
};

void Poczta::wypisz(){
    cout << "Nadawca: " << nadawca;
    cout << "\nOdbiorca: " << odbiorca;
    cout << "\nTemat: " << temat;
    cout << "\n\n\nTresc: " << tresc;
}
void Poczta::wczytaj(){
    cout << "Podaj nadawce: ";
    getline(cin,nadawca);
    cout << "Podaj odbiorce: ";
    getline(cin,odbiorca);
    cout << "Podaj temat: ";
    getline(cin,temat);
    cout << "Podaj tresc: ";
    getline(cin,tresc);
}
class Trojkat{
    double wysokosc,podstawa;
public:
    void wczytaj();
    void wypisz();
    double pole();
};
void Trojkat::wczytaj(){
    cin >> wysokosc;
    cin >> podstawa;
}
void Trojkat::wypisz(){
    cout << "Podstawa: " << podstawa;
    cout << endl << "Wysokosc: " << wysokosc;
}
double Trojkat::pole(){
    return podstawa*wysokosc/2;
}
void wieksze(Trojkat troj1, Trojkat troj2){
    if(troj1.pole()>troj2.pole()){
        troj1.wypisz();
    }
    else{
        troj2.wypisz();
    }
}
void WypiszMax(Trojkat trojkaty[], int n){
    double max =0;
    int index;
    for(int i=0;i<n;i++){
        if(trojkaty[i].pole()>max){
            max=trojkaty[i].pole();
            index=i;
        }
    }
    trojkaty[index].wypisz();
}


int main(){
/*    Trojkat figura;
    figura.wczytaj();
    figura.wypisz();
    cout << "Pole twojej figury wynosi: " << figura.pole();


    */
    Trojkat troj1;
    troj1.wczytaj();
    troj1.wypisz();
    Trojkat troj2;
    troj2.wczytaj();
    troj2.wypisz();

    wieksze(troj1,troj2);

    return 0;
}
