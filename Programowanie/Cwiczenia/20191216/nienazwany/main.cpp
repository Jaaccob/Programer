#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int funkcja(int n,int tab[4],int (*fun)(int,int)){
    int minimalnny=0;
    for(int i=0;i<n;i++){
        minimalnny=fun(tab[i],tab[i+1]);
    }
    return minimalnny;

}

//Zadanie 1
/*
int main()
{
    int a=10,b=2;
    int (*fun)(int,int);
    fun=add;
    cout << fun(a,b) << " dodawanie" << endl;
    fun=sub;
    cout << fun(a,b) << " odejmowanie" << endl;
    return 0;
}
*/
//Zadanie 2
/*
int main(){


    int a=10,b=2;
    int (*fun[4])(int,int);
    fun[0]=add;
    fun[1]=sub;
    cout << fun[0](a,b) << " dodawanie" << endl;
    cout << fun[1](a,b) << " odejmowanie" << endl;
    for(int i=0;i<2;i++){

    }
    return 0;
}
*/
//Zadanie3
/*
int main(){
    int n = 4;
    int tab[]={3,2,5,4};


    cout << "Minimalny element tablicy: " << funkcja(n,tab,min);
    cout << "Maksymalny element tablicy: " << funkcja(n,tab,max);
    return 0;
}
*/

//Data,czas,stałe matematyczne,biblioteka algorithm, konwersja liczb
//Zadanie 1

int main(){
    time_t t =time(NULL);
    struct *tm ct2 =localtime(&t2);
}
