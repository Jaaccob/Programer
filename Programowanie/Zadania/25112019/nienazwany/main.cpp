#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void zadanie5(int dlugosc, int array[]){
    int liczba=0;
    for(int i=0; i<dlugosc; i++){
        if(array[i]%10==3){
            liczba++;
        }
    }
    cout << "Liczba elementow w ktorych cyfra jednosci to 3 wynosi: "<< liczba << endl;
}

/*int main()
{
    int dlugosc;
    srand(time(NULL));
    dlugosc=rand()%15+1;
    int array[dlugosc];
    for(int i=0; i<dlugosc; i++){
        array[i]=rand()%20+1;
    }
    zadanie5(dlugosc,array);




    return 0;
}
*/
int main(){
    cout << "Podaj wspolrzedne twoich punktow." << endl;
    float x1,x2,x3,y1,y2,y3;
    cout << "Podaj x 1-ego punktu: "; cin >> x1;
    cout << "Podaj y 1-ego punktu: "; cin >> y1;

    cout << "Podaj x 2-ego punktu: "; cin >> x2;
    cout << "Podaj y 2-ego punktu: "; cin >> y2;

    cout << "Podaj x 3-ego punktu: "; cin >> x3;
    cout << "Podaj y 3-ego punktu: "; cin >> y3;

    float a,b;

    a=(y1-y2)/(x1-x2);
    b=y1-a*x1;

    float c,d;
    c=(y3-y2)/(x3-x2);
    d=y3-c*x3;

    if(c!=a || d!=b) cout << "Niewspolniniowe";
    else cout << "y= " << a << "x+" << b << endl;



    return 0;
}
