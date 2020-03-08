#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

void Zadanie1();
void Zadanie1_1(unsigned int size, int array[]);
void Zadanie2();
void Zadanie2_1(unsigned int size, int array[]);
void Zadanie3();
int Zadanie3_1(unsigned int size, int array[]);
void Zadanie4();
int Zadanie4_1(unsigned int size, int array[]);
void Zadanie5();
int Zadanie5_1(unsigned int size, int array[]);
void Zadanie6();
double Zadanie6_1(unsigned int size, int array[]);
void Zadanie7();
double Zadanie7_1(unsigned int size, int array[]);
void Zadanie8();
void sito(bool *tab , int n);
void Zadanie9();
void Zadanie10();
void Zadanie11();
void Zadanie12();
void Zadanie13();
void Zadanie14();
void Zadanie15();
void Zadanie16();
void Zadanie17();
void Zadanie18();
void Zadanie19();
void Zadanie20();
double pierwiastek(double a, double n)
{
//poczatkowe przyblizenie
double result = a;
//x^n-1
double tmp = pow(result,(n-1));
//dokladnosc obliczen
double e = 0.00000001;

//dopoki wynik jest mniej dokladny niz zadana wartosc
while (abs(a - tmp * result)>= e)
{
//oblicz nowe przyblizenie
result = 1/n*((n-1)*result + (a/tmp));
//x^n-1
tmp = pow(result, n-1);
}

return result;
}




int main()
{
    int choose=1;
    while (choose!=0) {
        system("cls");
        cout << "Zadanie 1" << endl;
        cout << "Zadanie 2" << endl;
        cout << "Zadanie 3" << endl;
        cout << "Zadanie 4" << endl;
        cout << "Zadanie 5" << endl;
        cout << "Zadanie 6" << endl;
        cout << "Zadanie 7" << endl;
        cout << "Zadanie 8" << endl;
        cout << "Zadanie 9" << endl;
        cout << "Zadanie 10" << endl;
        cout << "Zadanie 11" << endl;
        cout << "Zadanie 12" << endl;
        cout << "Zadanie 13" << endl;
        cout << "Zadanie 14" << endl;
        cout << "Zadanie 15" << endl;
        cout << "Zadanie 16" << endl;
        cout << "Zadanie 17" << endl;
        cout << "Zadanie 18" << endl;
        cout << "Zadanie 19" << endl;
        cout << "Zadanie 20" << endl;
        cout << "Podaj swoj wybor: ";
        cin >> choose;
        switch (choose) {
        case 0:               break;
        case 1:  Zadanie1();  break;
        case 2:  Zadanie2();  break;
        case 3:  Zadanie3();  break;
        case 4:  Zadanie4();  break;
        case 5:  Zadanie5();  break;
        case 6:  Zadanie6();  break;
        case 7:  Zadanie7();  break;
        case 8:  Zadanie8();  break;
        case 9:  Zadanie9();  break;
        case 10: Zadanie10(); break;
        case 11: Zadanie11(); break;
        case 12: Zadanie12(); break;
        case 13: Zadanie13(); break;
        case 14: Zadanie14(); break;
        case 15: Zadanie15(); break;
        case 16: Zadanie16(); break;
        case 17: Zadanie17(); break;
        case 18: Zadanie18(); break;
        case 19: Zadanie19(); break;
        case 20: Zadanie20(); break;


        default: cout << "Błędna dana wejściowa, popraw liczbę!!! " << endl; break;
        }
    }
    return 0;
}
void Zadanie1(){                                                                                        //Zerowanie tablicy
    system("cls");


    cout << "Podaj wielkosc tablicy: ";
    unsigned int size; cin >> size;
    srand(time(NULL));
    int array[size];
    cout << endl;
    for(unsigned int i=0; i<size; i++){
        array[i]=rand()%10+1;
        cout << "[" << array[i] << "]";
    }
    cout << endl;
    Zadanie1_1(size,array);


    getchar();getchar();
}
void Zadanie1_1(unsigned int size, int array[]){
    for(unsigned int i=0; i<size; i++){
        array[i]=0;
        cout << "[" << array[i] << "]";
    }
}
void Zadanie2(){                                                                                        //Podwajanie wartości w tablicy
    system("cls");


    cout << "Podaj wielkosc tablicy: ";
    unsigned int size; cin >> size;
    srand(time(NULL));
    int array[size];
    cout << endl;
    for(unsigned int i=0; i<size; i++){
        array[i]=rand()%10+1;
        cout << "[" << array[i] << "]";
    }
    cout << endl;
    Zadanie2_1(size,array);

    getchar();getchar();
}
void Zadanie2_1(unsigned int size, int array[]){
    for(unsigned int i=0; i<size; i++){
        array[i]=array[i]*2;
        cout << "[" << array[i] << "]";
    }
}
void Zadanie3(){                                                                                        //Zwraca sumę wartości tablicy
    system("cls");


    cout << "Podaj wielkosc tablicy: ";
    unsigned int size; cin >> size;
    srand(time(NULL));
    int array[size];
    cout << endl;
    for(unsigned int i=0; i<size; i++){
        array[i]=rand()%10+1;
        cout << "[" << array[i] << "]";
    }
    cout << endl;
    cout << "Suma twojej tablicy to: " << Zadanie3_1(size,array) << endl;


    getchar();getchar();
}
int Zadanie3_1(unsigned int size, int array[]){
    int sum=0;
    for(unsigned int i=0; i<size; i++){
        sum+=array[i];
    }
    return sum;
}
void Zadanie4(){                                                                                        //Zwraca iloczyn wartości tablicy
    system("cls");


    cout << "Podaj wielkosc tablicy: ";
    unsigned int size; cin >> size;
    srand(time(NULL));
    int array[size];
    cout << endl;
    for(unsigned int i=0; i<size; i++){
        array[i]=rand()%10+1;
        cout << "[" << array[i] << "]";
    }
    cout << endl;
    cout << "iloczyn twojej tablicy to: " << Zadanie4_1(size,array) << endl;


    getchar();getchar();
}
int Zadanie4_1(unsigned int size, int array[]){
    int iloczyn=1;
    for(unsigned int i=0; i<size; i++){
        iloczyn*=array[i];
    }
    return iloczyn;
}
void Zadanie5(){                                                                                        //Zwraca sume parzystych indeksów tablicy
    system("cls");


    cout << "Podaj wielkosc tablicy: ";
    unsigned int size; cin >> size;
    srand(time(NULL));
    int array[size];
    cout << endl;
    for(unsigned int i=0; i<size; i++){
        array[i]=rand()%10+1;
        cout << "[" << array[i] << "]";
    }
    cout << endl;
    cout << "Suma indeksow parzystych twojej tablicy to: " << Zadanie5_1(size,array) << endl;


    getchar();getchar();
}
int Zadanie5_1(unsigned int size, int array[]){
    int suma=0;
    for(unsigned int i=0; i<size; i+=2){
        suma+=array[i];
    }
    return suma;
}
void Zadanie6(){                                                                                        //Zwraca średnią arytmetyczną tablicy
    system("cls");


    cout << "Podaj wielkosc tablicy: ";
    unsigned int size; cin >> size;
    srand(time(NULL));
    int array[size];
    cout << endl;
    for(unsigned int i=0; i<size; i++){
        array[i]=rand()%10+1;
        cout << "[" << array[i] << "]";
    }
    cout << endl;
    cout << "Srednia twojej tablicy to: " << Zadanie6_1(size,array) << endl;


    getchar();getchar();
}
double Zadanie6_1(unsigned int size, int array[]){
    double avg=0;
    for(unsigned int i=0; i<size; i++){
        avg+=array[i];
    }
    return (avg/size);
}
void Zadanie7(){
    system("cls");


    cout << "Podaj wielkosc tablicy: ";
    unsigned int size; cin >> size;
    srand(time(NULL));
    int array[size];
    cout << endl;
    for(unsigned int i=0; i<size; i++){
        array[i]=rand()%10+1;
        cout << "[" << array[i] << "]";
    }
    cout << endl;
    cout << "Srednia twojej tablicy to: " << Zadanie7_1(size,array) << endl;


    getchar();getchar();
}
double Zadanie7_1(unsigned int size, int array[]){
    double avg_geo=1;
    for(unsigned int i=0; i<size; i++){
        avg_geo*=array[i];
    }
    return pierwiastek(avg_geo,size);

}
void Zadanie8(){
    system("cls");


    cout << "Podaj liczbe która ma być kresem górnym przedziału: ";
    int n; cin >> n;
    bool *tab = new bool [n+1];
    for(int i=2; i<n; i++){                                 //Zerowanie tablicy bool
        tab[i]=0;
    }
    sito(tab,n);
    cout<<"Kolejne liczby pierwsze z przedziału [2.."<<n<<"]: ";

    for(int i=2;i<=n;i++)
        if(!tab[i])
            cout<<i<<" ";

    cout<<endl;

    delete []tab;

    getchar();getchar();
}
void sito(bool *tab , int n){
    for(int i=2 ; i*i<n; i++){
        if(!tab[i]){
            for(int j=i*i; j<=n; j+=i){
                tab[j]=1;
            }
        }
    }
}
void Zadanie9(){
    system("cls");





    getchar();getchar();
}
void Zadanie10(){
    system("cls");





    getchar();getchar();
}
void Zadanie11(){
    system("cls");





    getchar();getchar();
}
void Zadanie12(){
    system("cls");





    getchar();getchar();
}
void Zadanie13(){
    system("cls");





    getchar();getchar();
}
void Zadanie14(){
    system("cls");





    getchar();getchar();
}
void Zadanie15(){
    system("cls");





    getchar();getchar();
}
void Zadanie16(){
    system("cls");





    getchar();getchar();
}
void Zadanie17(){
    system("cls");





    getchar();getchar();
}
void Zadanie18(){
    system("cls");





    getchar();getchar();
}
void Zadanie19(){
    system("cls");





    getchar();getchar();
}
void Zadanie20(){
    system("cls");





    getchar();getchar();
}
