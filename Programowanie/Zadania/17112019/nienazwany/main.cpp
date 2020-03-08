#include <iostream>

using namespace std;

//zadanie 3
float potega(float n, unsigned int m){
    if (m==0) return 1;
    else {
        float mnoz;
        mnoz = n;
        for(int i=1; i<m; i++){
            n=n*mnoz;
        }
        return n;
    }
}
//zadanie 4
unsigned int potegaa(unsigned int n, unsigned int m){
    if (m==0) return 1;
    else {
        unsigned int mnoz;
        mnoz = n;
        for(int i=1; i<m; i++){
            n=n*mnoz;
        }
        return n;
    }
}


int main()
{

    //Zad 3
    /*
    cout << "Podaj liczbe wymierna" << endl;
    float wymier; cin >> wymier;

    cout << "Podaj liczbe naturanla" << endl;
    unsigned int natur; cin >> natur;

    cout << potega(wymier,natur);
    */
    //Zad 4
    cout << "Podaj liczbe pierwiastkowania" << endl;
    unsigned int n; cin >> n;

    cout << "Podaj stopien pierwiastka" << endl;
    unsigned int s; cin >> s;

    for(int i=1; i<n; i++){
        if(potegaa(i,s)>n){
            cout << i-1 << endl;
            break;
        }
    }

    return 0;
}
