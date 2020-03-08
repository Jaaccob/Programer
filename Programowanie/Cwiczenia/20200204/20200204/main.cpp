#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;


void fun1(string scieszka){

    int znak;

    FILE *plik = fopen(scieszka.c_str(),"wr");

    if(plik==NULL){
        perror("Nie udalo sie otworzyc pliku!");
        exit (0);
    }

}


int main()
{
    FILE *plik1 = fopen("plik1.txt", "r");
    if(plik1==NULL){
        perror("Nie udało sie otworzyc pliku 1!");
        return 1;
    }

    FILE *plik2 = fopen("plik2.txt","w");
    if(plik2==NULL){
        perror("Nie udało sie otworzyc pluku 2!");
        return 1;
    }


    char znak;
    fseek(plik2,0,SEEK_END);
    int rozmiar = ftell(plik2);
    znak = getc(plik2);
    while (znak != EOF) {
        fseek(plik1, rozmiar--, 0);
        printf("%i\n",rozmiar);
        putc(znak,plik1);
        znak = getc(plik2);
    }


    fclose(plik1);
    fclose(plik2);
    return 0;
}
