#include <iostream>
#include <time.h>

using namespace std;

int* zadanie3(const int* const a, const int* const b){
    int *sum = new int;
    *sum = *a + *b;
    return sum;
}
double* zadanie4(int n,double tab[]){
    double *y = new double[n];
    for(int i=0; i<n; i++){
        *(y+i)=tab[i];
    }
    return y;
}
int* zadanie5(unsigned int n,int tab1[], int tab2[]){
    int *tablica = new int [n];
    for (int i=0;i<n; i++){
        tablica[i]=tab1[i]+tab2[i];
    }
    return tablica;
}
int zadanie6(int tab_in[],int tab_out[], int n){
    int zlicz=0;                                                    //Liczy ile razy zostalo przepisane powtorzenie
    for(int i=0; i<n; i++){                                         //Petla dla pierwszej tablicy
        for(int j=0; j<n; j++){                                     //Petla dla drugiej tablicy
            if(*(tab_out+i)==tab_in[j]) zlicz++;
        }


    }
}



/*Zadanie 4
int main()
{
    srand(time(NULL));

    int n;
    cin >> n;
    double tab[n];
    for(int i=0; i<n; i++){
    tab[i]=rand()%100;
    }
    for (int i=0; i<n; i++){
        cout << tab[i] << ",";

    }

    zadanie4(n,tab);
    cout << *(zadanie4(n,tab)+1);

    return 0;
}*/
/*Zadanie 5 sprawdz!!
int main(){
    int n, tab1[n], tab2[n];
    cin >> n;
    srand(time(NULL));

    for(int i=0; i<n; i++){
        tab1[i]=rand()%100;
        tab2[i]=rand()%50;
    }

    int *wsk = zadanie5(n,tab1,tab2);
}*/
int main(){

    int *wsk= new int[5];
    delete [] wsk;
    return 0;
}
