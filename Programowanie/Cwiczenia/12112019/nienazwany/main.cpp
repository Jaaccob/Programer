#include <iostream>
#include <math.h>

using namespace std;
void funkcja3(int x){
    int y=252;
    printf("%d\n",x&y);
}
void funkcja4(int x){
    int y=192;
    printf("%d\n",x|y);
}
void funkcja5(int x){
    int y=129;
    printf("%d\n",x^y);
}

int main()
{

    //Zadanie 1
    /*
    int x;
    cin >> x;
    if(x&1==1) cout << "Liczba nie jest parzysta";
    else cout << "Liczba jest parzysta";
    cout << x&1;

    */

    //Zadanie 2
    /*
    int x;
    cin >> x;
    printf("%d\n",!(x&(x-1)));

    */
    //Zadanie 3
    /*
    int x;
    cin >> x;
    funkcja3(x);

    */
    //Zadanie 4
    /*
    int x;
    cin >> x;
    funkcja4(x);

    */
    //Zadanie 5
    /*
    int x;
    cin >> x;
    funkcja5(x);

    */
    //POWTORZENIE

    //Zadanie 1
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x;
    double delta;
    delta=(b*b)-(4*a*c);
    delta=sqrt(delta);
    if(delta<0) {
        cout << "Brak rozwiazaina dla x";
        return 0;
    }
    if(delta==0){

    }

    return 0;
}
