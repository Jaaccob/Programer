/*
#include <stdio.h>

int main(void){
    int masa =184;
    char znak ='a';
    printf("Wartosc masa=%d\n", masa);
    printf("Wielkosc zmiennej masa:%d\n", sizeof(masa));
    printf("Adres zmiennej masa=%p\n", &masa);
    printf("Wartosc znak=%d\n", znak);
    printf("Wielkosc zmiennej znak:%d\n", sizeof(znak));
    printf("Adres zmiennej znak=%p\n", &znak);
    return 0;
}
*/
/*
#include <stdio.h>

int main(void){
    int masa =184;

    int* p_masa;
    printf("Wielkosc zmiennej p_masa:%d\n", sizeof(p_masa));
    printf("Wartosc p_masa        = 0x%llx\n", p_masa);
    printf("Adres zmiennej p_masa = %p\n", &p_masa);

    p_masa =&masa;
    printf("Wartosc p_masa        = 0x%llx\n", p_masa);
    printf("Adres zmiennej masa   = %p\n", &masa);
    printf("Adres zmiennej p_masa = %p\n", &p_masa);
    return 0;
}
*/
/*
#include <stdio.h>

int main(void){
    int masa =184;
    int* p_masa =&masa;
    int masa2 =*p_masa;   // operator dereferencji – wartosc pod wskaznikiem
    printf("Wartosc p_masa     = 0x%llx\n", p_masa);
    printf("Wartośc pod p_masa = %d\n",    *p_masa);
    printf("Wartośc masa2      = %d\n",      masa2);
    return 0;
}
*/
/*
#include <stdio.h>

int main(void){
    int* pt =nullptr;   // adres nullptr jest szczególnym adresem
    if( pt !=nullptr )  // adres 0 (NULL)
    {
        printf("Adres pt: %p\n", pt);
        printf("Wartosc pod pt: %d\n", *pt);
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main(void){
    short array[5] = {1,2,3,4,5};
    short* p1 = array;
    short* p2 =&array[0];

    printf("Adres p1:    %p\n", p1);
    printf("Adres p2:    %p\n", p2);
    printf("Adres array: %p\n", array);
    return 0;
}
*/
/*
#include <stdio.h>

int main(void){
    int masa =184;
    int* p_masa =&masa;
    int* p_waga =&masa;
    if (p_masa == p_waga){
        printf("Adres p_masa       = 0x%llx\n", &p_masa);
        printf("Adres p_waga       = 0x%llx\n", &p_waga);
        printf("Wartosc pod p_masa = %d\n", *p_masa);
        printf("Wartosc pod p_waga = %d\n", *p_waga);
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main(void){
    short array[5] = {1,2,3,4,5};
    short* ptr = array;
    for(int i=0; i<5; i++){
        printf("Adres   elementu %d: %p\n", i, &array[i] );
        printf("Adres   elementu %d: %p\n", i, ptr+i     );
        printf("Wartosc elementu %d: %d\n", i, array[i]  );
        printf("Wartosc elementu %d: %d\n", i, *(ptr+i)  );
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main(void){
    short array[5] = {1,2,3,4,5};
    short* ptr = array;
    for(int i=0; i<5; i++)
        printf("Wartosc array[%d]==%d\n", i, ptr[i] );

    int var = 184;
    int* p_var = &var;
    printf("Wartosc pod p_var=%d\n", p_var[0] );
    return 0;
}
*/
/*
#include <stdio.h>

int suma(const int v[], int n) {       //klasyczna tablica w argumencie
    int s =0;
    for(int i=0; i<n; ++i) s += v[i];  //klasyczna iteracja po tablicy
    return s;
}

int suma2(int* begin, int* end) {    //wskaźnik zamiast tablicy
    int s =0;
    while(begin<end) s +=*begin++;  // iteracja po tablicy za pomocą wskaźnika
    return s;
}
int main(void) {
    int array[5] = {1,2,3,4,5};
    int* ptr = array;
    printf("Suma: %d\n", suma(ptr, 5));
    printf("Suma: %d\n", suma2(ptr, ptr+5));
    return 0;
}
*/
/*
#include <stdio.h>

int string_length(const char* str) {
    int len =0;
    for(; str[len] !='\0'; len++);
    return len;
}
int string_length2(const char* str) {
    int len =0;
    while( *(str + ++len) );
    return len;
}
int main(void) {
    char* string ="bardzo dlugi napis";
    int l = string_length(string);
    printf("Dlugosc napisu: %d\n", l);
    return 0;
}
*/
/*
#include <stdio.h>

int string_length(char* str);

void string_copy(const char* src, char* dst) {
    int i=0;
    for(; src[i] !='\0'; i++) dst[i] = src[i];
    dst[i] ='\0';
}

void string_copy2(const char* src, char* dst) {
    while( *dst++=*src++ );
}

int main(void) {
    char* string ="bardzo dlugi napis";
    int l = string_length(string);
    char s2[l+1];
    string_copy(string, s2);
    printf("Napis: %s\n", s2);
    return 0;
}
*/

//Dynamiczne alokowanie pamieci

#include <iostream>

int main() {
    int arr_size =10;// alokacja tablicy 10-elementowej

    int* arr = new int[arr_size];

    for(int i=0; i<arr_size; *(arr+i)=i*3,++i);

    for(int i=0; i<arr_size; printf("%d,", arr[i++])); // skasowanie tablicy arr

    delete arr;

    return 0;
}
