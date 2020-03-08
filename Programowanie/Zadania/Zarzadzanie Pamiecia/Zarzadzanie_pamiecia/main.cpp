#include <iostream>
#include <time.h>

using namespace std;

void Zadanie1();
void Zadanie2();
void Zadanie3();
int *Zadanie3_1(int size);
void Zadanie4();
void Zadanie5();
const int *Zadanie5_1(const int *pointer_a, const int *pointer_b);
void Zadanie6();
int *Zadanie6_1(int *array, int size);
void Zadanie7();
int *Zadanie7_1(unsigned int size, int *array_1, int *array_2);
void Zadanie8();
int Zadanie8_1(int *array_in, int *array_out, unsigned int size);
void Zadanie9();
int *Zadanie9_1(int *array_1, int *array_2, unsigned int size_1, unsigned int size_2);
void Zadanie10();
void *Zadanie10_1(int *pointe_type_int, double *pointer_type_double, int size);

int main()
{
    int wybor=1;
    while (wybor!=0) {                      //Wybieranie który program ma zostać uruchomiony
        system("cls");
        cout << "Zadania od 1 do 10 " << endl;
        cout << "Wybierz nr zadania: ";
        cin >> wybor;
        switch (wybor) {
        case 0: break;
        case 1: Zadanie1(); break;
        case 2: Zadanie2(); break;
        case 3: Zadanie3(); break;
        case 4: Zadanie4(); break;
        case 5: Zadanie5(); break;
        case 6: Zadanie6(); break;
        case 7: Zadanie7(); break;
        case 8: Zadanie8(); break;
        case 9: Zadanie9(); break;
        case 10: Zadanie10(); break;

        default: cout << "Brak takiego numeru !! Podaj prawidlowa wartosc" << endl;
        }
    }
    return 0;
}
void Zadanie1(){                    //Zadanie pierwsze - zaalokuj pamięć równą 1 bajtowi, pokaż to
    system("cls");


    char *wskaznik = new char [1];              //Wielkość char równa 1 bajt
    cout << "Wielkosc wskaznika: " << sizeof (wskaznik) << endl;                        //4 bajty
    cout << "Wielkosc zaalokowanej pamieci: " << sizeof (*wskaznik) << endl;            //1 bajt

    getchar();getchar();
}
void Zadanie2(){                    //Zadanie drugie - zaalokuj pamięć typu float i sprawdz ile zajmuje bajtów
    system("cls");


    float **pointer = new float*[10];           //Wielkosc wskaznika w bajtach równa sie 4
    for(int i=0; i<10; i++){                    //Wielkosc floata równa 4 bajty
        *pointer = new float [10];
    }
    cout << "Wielkosc wskaznika: " << sizeof (pointer) << endl;
    cout << "Wielkosc zaalokowanej *pamieci: " << sizeof (*pointer) << endl;
    cout << "Wielkosc zaalokowanej **pamieci: " << sizeof (**pointer) << endl;

    getchar();getchar();

}
void Zadanie3(){                    //Zadanie trzecie - zaalokuj pamięć wielkości n-elementów i dynamicznie przydziel mu miejsce
    system("cls");


    cout << "Podaj wielkosc pamieci do zaalokowania: ";
    int size; cin >> size;
    cout << "Wskaznik na zaalokowana pamiec: " << Zadanie3_1(size);


    getchar();getchar();
}
int *Zadanie3_1(int size){          //Alokuje pamięć równą size elementów
    int *pointer = new int [size];
    return pointer;
}
void Zadanie4(){                    //Zadanie czwarte - zaalokuj pamięć wielkości n-elementów i zwolinj ja
    system("cls");


    cout << "Podaj wielkosc pamieci do zaalokowania: ";
    int size; cin >> size;
    int *pointer = new int [size];
    delete [] pointer;
    cout << "Pamieć została zwolniona" << endl;


    getchar();getchar();
}
void Zadanie5(){                    //Zadanie piąte - dwa stałe wskaźniki wskazujace na stałe maja zwrócić sume
    system("cls");


    const int a=5;
    const int b=8;
    const int *pointer_a=&a,*pointer_b=&b;
    cout << *Zadanie5_1(pointer_a,pointer_b);


    getchar();getchar();
}
const int *Zadanie5_1(const int *pointer_a, const int *pointer_b){              //Zwraca sume stałych wskaźników
    const int *pointer = new int [5];//Nie działa
    pointer=pointer_a;
    pointer+=*pointer_b;
    return  pointer;
}
void Zadanie6(){                    //Zadanie szóste - stwórz tablice a nastepnie skopiuj ja w funkcji i zwróć jej wskaźnik
    system("cls");


    cout << "Podaj wielkosc tablicy kopiujacej: ";
    unsigned int n; cin >> n;
    int array[n];
    cout << "Wskaznik na skopiowana tablice : " << Zadanie6_1(array,n) << endl;

    getchar();getchar();
}
int *Zadanie6_1(int *array, int size){      //Kopiuje tablice array i zwraca wskaźnik na array_copy
    int *pointer = new int [size];
    for(int i=0; i<size; i++){
        pointer[i]=array[i];
    }
    return pointer;
}
void Zadanie7(){                    //Zadanie siódme - zaalokuj pamięć dla 2 tablic i zwróć pierwszy element sumy tych tablic
    system("cls");


    cout << "Podaj ile wspolrzednych maja miec wektory: ";
    unsigned int size; cin >> size;
    int *array_1 = new int [size];
    int *array_2 = new int [size];
    srand(time(NULL));
    for(unsigned int i=0; i<size; i++){
        array_1[i] = rand()%10+1;
        cout << "[" <<array_1[i] << "]";
    }
    cout << endl;
    for(unsigned int i=0; i<size; i++){
        array_2[i] = rand()%10+1;
        cout << "[" <<array_2[i] << "]";
    }
    cout << endl;

    cout << "Suma pierwszej zmiennej sumy wektorów wynosi: " << *Zadanie7_1(size,array_1,array_2);


    getchar();getchar();
}
int *Zadanie7_1(unsigned int size, int *array_1, int *array_2){ //Zwraca wskażnik na sume dwóch tablic
    int *sum_array = new int [size];
    for(unsigned int i=0; i<size; i++){
        sum_array[i]=array_1[i]+array_2[i];
    }
    return sum_array;
}
void Zadanie8(){                    //Zadanie ósme - przepisywanie bez powtórzeń liczb
    system("cls");


    cout << "Podaj ile elementów ma mieć twoja tablica: ";
    unsigned int size; cin >> size;
    int *array_in = new int [size];
    int *array_out = new int [size];
    srand(time(NULL));
    for(unsigned int i=0; i<size; i++){
        array_in[i]=rand()%10+1;
        cout << "[" << array_in[i] << "]";
    }
    cout << endl;
    cout << "Ilosc przepisanych liczb wynosi: " << Zadanie8_1(array_in,array_out,size) << endl;

    getchar();getchar();
}
int Zadanie8_1(int *array_in, int *array_out, unsigned int size){       //Zwraca ilość przepisanych elementów bez powtórzeń
    int ilosc_powtorzen;
    int przepisania=0;
    for(unsigned int i=0; i<size; i++){
        for(unsigned int j=0; j<size; j++){
            if(array_in[i]==array_out[j]){
                ilosc_powtorzen++;
            }
        }
    if(ilosc_powtorzen==0){
        array_out[i]=array_in[i];
        przepisania++;
    }
    ilosc_powtorzen=0;
    }
    return przepisania;
}
void Zadanie9(){
    system("cls");


    srand(time(NULL));
    cout << "Podaj rozmiar pierwszej tablicy: ";
    unsigned int size_1; cin >> size_1;
    int *array_1 = new int [size_1];
    for(unsigned int i=0; i<size_1; i++){
        array_1[i]=rand()%10+1;
        cout << "[" << array_1[i] << "]";
    }
    cout << endl;
    cout << "Podaj rozmiar drugiej tablicy: ";
    unsigned int size_2; cin >> size_2;
    int *array_2 = new int [size_2];
    for(unsigned int i=0; i<size_2; i++){
        array_2[i]=rand()%10+1;
        cout << "[" << array_2[i] << "]";
    }
    cout << endl << endl;
    cout << "Pierwszy element twojej tablicy wynosi: " << *Zadanie9_1(array_1,array_2,size_1,size_2);

    cout << endl;



    getchar();getchar();
}
int *Zadanie9_1(int *array_1, int *array_2, unsigned int size_1, unsigned int size_2){
    int *copy_array = new int [size_1+size_2];
    for(unsigned int i=0; i<size_1; i++){
        copy_array[i]=array_1[i];

    }
    for(unsigned int i=size_1; i<size_1+size_2; i++){
        copy_array[i]=array_2[i-size_1];
    }
    for(unsigned int i=0; i<size_1+size_2; i++){
        cout << "[" << copy_array[i] << "]";
    }
    cout << endl;
    return copy_array;
}
void Zadanie10(){
    system("cls");


    int *pointe_type_int;
    double *pointer_type_double;
    cout << "Podaj rozmiar tablic: ";
    int size; cin >> size;
    Zadanie10_1(pointe_type_int,pointer_type_double,size);
    cout << endl << "Wielkosc w pamieci inta: " << pointe_type_int[0] << endl;
    cout << "Wielkosc w pamieci dobule: " << pointe_type_int[1] << endl;


    getchar();getchar();
}
void *Zadanie10_1(int *pointe_type_int, double *pointer_type_double, int size){
    pointe_type_int = new int [size];
    pointer_type_double = new double [size];
    cout << endl << "Adresy pamieci dla int: " << endl;
    srand(time(NULL));
    for(int i=0; i<size; i++){
        pointe_type_int[i]=rand()%10+1;
        cout << pointe_type_int[i] << ",";
        pointe_type_int[0]+=sizeof (pointe_type_int[i]);
    }
    cout << endl << "Adresy pamieci dla double: " << endl;
    for(int i=0; i<size; i++){
        pointer_type_double[i]=rand()%10+1;
        cout << pointer_type_double[i] << ",";
        pointe_type_int[1]+=sizeof (pointer_type_double[i]);
    }

}












