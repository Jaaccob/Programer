#include <iostream>

using namespace std;


//Zadanie 8
int Euklides(int n, int m) {
    while (n != m) {
        if (n > m) n -= m;
        else  m -= n;
    }
    return n;
}

//Zadanie 9
long int silniaalgo(int silnia) {
    if (silnia == 1) return 1;
    else return silnia * silniaalgo(silnia - 1);
}

//Zadanie 10
int funwypiszlicz(int a) {
    if (a < 0) {
        return 1;
    }
    else cout << a << ",";
        funwypiszlicz(a-1);
}

//Zadanie 7
bool szyfr(bool n){
    if(n==1){
        for(int i=0; i<=9999; i++){ cout << i << ",";}
    }
    else if(n==0){
        for(int i=1; i<=9; i++){
            for(int j=0; j<=9; j++){
                for(int k=0; k<=9; k++){
                    for(int l=0; l<=9; l++)
                    if(k!=j && k!=i && j!=i && l!=k && l!=j && l!=i){
                    cout << i << j << k << l << ",";}
                }

            }
        }
    }
}

int main()
{
    //Zadanie 8
/*
    cout << "Podaj dwie liczby dodatnie liczby n i m: "; int n, m; cin >> n >> m;
    cout << Euklides(n,m) << endl;
    */

    //Zadanie 9
    /*
    cout << "Podaj silnie jaka chcesz obliczyc: "; int silnia; cin >> silnia;
    cout << "Twoja silnia wynosi: " << silniaalgo(silnia);
    */

    //Zadanie 10
    /*cout << "Podaj liczbe, ktora mam wypisac: "; int a; cin >> a;
    cout << "Twoje liczby to: " << endl;
    funwypiszlicz(a);*/

    //Zadanie 7
    cout << "Jaki mam wygenerowac klucz? Jesli wpiszesz '1' wtedy bede generowac liczby z powtorzeniami. Jesli wpiszesz '0' wtedy bede generowac liczby bez powtorzen:  "; int n; cin >> n;
    szyfr(n);




    return 0;
}
