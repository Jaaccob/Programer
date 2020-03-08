#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;



//Zadanie 1
struct Trojkat{
    unsigned int side_a,side_b,side_c;
};
unsigned int triangle_circumference(Trojkat zmienne){                   //Obwód trójkata podanego w argumencie typu strukturalnego(Trojkat)
    return zmienne.side_a+zmienne.side_b+zmienne.side_c;
}
void show(Trojkat zmienna){                                             //Wyswietla wszystkie boki trojkata w strukturze Trojkat
    cout << "Bok a: " << zmienna.side_a << endl;
    cout << "Bok b: " << zmienna.side_b << endl;
    cout << "Bok c: " << zmienna.side_c << endl;
}
//Koniec Zadanie1 ------------------
//Zadanie 2
void rewrite(Trojkat troj1,Trojkat *troj2){                             //Przepisuje wartości z zmiennej troj1 do wskaznika troj2
    troj2->side_a=troj1.side_a;
    troj2->side_b=troj1.side_b;
    troj2->side_c=troj1.side_c;
}
void show_for_pointer(Trojkat *troj2){
    cout << "Bok a: " << troj2->side_a;
    cout << "Bok b: " << troj2->side_b;
    cout << "Bok c: " << troj2->side_c;
}
//Koniec Zadanie2 ------------------
//Zadanie 3
struct Punkt{
    int cordinate_a,cordinate_b,cordinate_c;
};
int distance_point(Punkt *array,int size){                              //Sprawdza ktory wektor jest najmniejszy i oddaje jego wartosc
    int minimum = sqrt(pow(array[1].cordinate_a-array[0].cordinate_a,2)+pow(array[1].cordinate_b-array[0].cordinate_b,2)+pow(array[1].cordinate_c-array[0].cordinate_c,2));
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(sqrt(pow(array[i].cordinate_a=array[j].cordinate_a,2)+pow(array[i].cordinate_b-array[j].cordinate_b,2)-pow(array[i].cordinate_c-array[j].cordinate_c,2))<minimum && i!=j){
                minimum=sqrt(pow(array[i].cordinate_a-array[j].cordinate_a,2)+pow(array[i].cordinate_b-array[j].cordinate_b,2)-pow(array[i].cordinate_c-array[j].cordinate_c,2));
            }
        }
    }
    return minimum;
}
//Koniec Zadanie3 ------------------
//Zadanie 4
void rewrite_array(Punkt *array_1,Punkt *array_2){                      //Przepisuje współrzędne pierwszej tablicy do drugiej
    for(int i=0; i<10; i++){
        array_2[i].cordinate_a=array_1[i].cordinate_a;
        array_2[i].cordinate_b=array_1[i].cordinate_b;
        array_2[i].cordinate_c=array_1[i].cordinate_c;
    }
}
//Koniec Zadanie4 ------------------
//Zadanie 5
struct Punkt10{
    int array[10];
};
//Koniec Zadanie5 ------------------
//Zadanie 6
void rewrite_array_10(Punkt10 *array_1,Punkt10 *array_2, int size){     //Przepisuje wektory z tablicy 10 elementowej
    for(int i=0; i<size; i++){
        for(int j=0; j<10; j++){
            array_2[i].array[j]=array_1[i].array[j];
        }
    }
}
void show_array_10(Punkt10 *array, int size){                           //Wyswietla wektory z tablicy 10 elementowej
    for(int i=0; i<size; i++){
        cout << "Wektor " << i << ": ";
        for(int j=0; j<10; j++){
            cout << "[" << array[i].array[j] << "],";
        }
        cout << endl;
    }
}
//Koniec Zadanie6 ------------------
//Zadanie 7
struct Punktn{                                                          //Przestrzen n wymiarowa
    int size;
    int *array;
};
//Koniec Zadanie7 ------------------
//Zadanie 8
void rewrite_array_n_to_array_n2(Punktn array_1,Punktn array_2,Punktn array_3,int size){
    int *array_copy = new int [size*3];
    for(int i=0, j=0; i<size*3; i+=3, j++){
        array_copy[i]=array_1.array[j];
        array_copy[i+1]=array_2.array[j];
        array_copy[i+2]=array_3.array[j];
    }
    cout << endl << endl << "Array_copy wyglada tak: " << endl << "[";
    for(int i=0; i<size*3; i++){
        cout << array_copy[i] << ",";
    }
    cout << "]" << endl;
}
void rewrite_array_n_to_array_n_copy(Punktn array_1,Punktn array_2, int size){
    cout << endl << "Array_2 wyglada teraz tak: ";
    for(int i=0; i<size; i++){
        array_2.array[i]=array_1.array[i];
        cout << array_2.array[i] << ",";
    }
    cout << endl << endl;
}
//Koniec Zadanie8 -----------------
//Zadanie 9
struct Zespolone{
    double Re, Im;
};
//Koniec Zadanie9 -----------------
//Zadanie 10
Zespolone add_int(Zespolone z1,Zespolone z2){
    Zespolone z3;
    z3.Im=z1.Im+z2.Im;
    z3.Re=z1.Re+z2.Re;
    return z3;
}
Zespolone *add_point(Zespolone *z1,Zespolone *z2){
    Zespolone *z3 = new Zespolone;
    z3->Im=z1->Im+z2->Im;
    z3->Re=z1->Re+z2->Re;
    return z3;
}
//Koniec Zadanie10 ----------------
//Na macierze
//Zadanie 1
struct Mother{
    int dim_1;
    int dim_2;
    int **pointer;
};

//Koniec Zadanie1 -----------------
//Zadanie 2
void rewrite_mother(Mother m1){
    m1.dim_1=rand()%6+3;
    m1.dim_2=rand()%4+2;

    m1.pointer = new int *[m1.dim_1];
    for(int i=0; i<m1.dim_1; i++){
        m1.pointer[i] = new int [m1.dim_2];
    }
    for(int i=0; i<m1.dim_1; i++){
        for(int j=0; j<m1.dim_2; j++){
            m1.pointer[i][j]=
        }
    }
}
//Koniec Zadanie2 -----------------



int main()
{
   cout << "Zadanie 1" << endl << endl;
    //Zadanie 1
    Trojkat t1;
    cout << "Podaj boli trojkata" << endl;
    cout << "Bok a:";
    //cin >> t1.side_a;
    t1.side_a=1;
    cout << "Bok b:";
    //cin >> t1.side_b;
    t1.side_b=4;
    cout << "Bok c:";
    //cin >> t1.side_c;
    t1.side_c=2;
    cout << endl << endl;
    show(t1);
    cout << "Obwod twojego trojkata wynosi: " << triangle_circumference(t1) << endl;

    cout << endl << endl << "Zadanie 2" << endl << endl;
    //Zadanie 2
    //Powtorzenie Trojkat t1;
    cout << "Podaj boli trojkata" << endl;
    cout << "Bok a:";
    //cin >> t1.side_a;
    t1.side_a=1;
    cout << "Bok b:";
    //cin >> t1.side_b;
    t1.side_b=4;
    cout << "Bok c:";
    //cin >> t1.side_c;
    t1.side_c=2;
    cout << endl << endl;
    t1.side_a=1;
    cout << "Bok b:";
    //cin >> t1.side_b;
    t1.side_b=4;
    cout << "Bok c:";
    //cin >> t1.side_c;
    t1.side_c=2;
    cout << endl << endl;

    Trojkat *t2 = new Trojkat;
    rewrite(t1,t2);
    show_for_pointer(t2);

    cout << endl << endl << "Zadanie 3" << endl << endl;
    //Zadanie 3

    srand(time(NULL));
    Punkt *array= new Punkt[10];
    for(int i=0;i<10;i++){
        array[i].cordinate_a=rand()%99+1;
        cout << i << ".Wspolrzedna a: " << array[i].cordinate_a << " ";
        array[i].cordinate_b=rand()%99+1;
        cout << i << ".Wspolrzedna b: " << array[i].cordinate_b << " ";
        array[i].cordinate_c=rand()%99+1;
        cout << i << ".Wspolrzedna c: " << array[i].cordinate_c << " " << endl;
    }
    cout << "Najmniejsza odleglosc to: " << distance_point(array,10) << endl;

    cout << endl << endl << "Zadanie 4" << endl << endl;
    //Zadanie 4
    srand(time(NULL));
    //Punkt *array= new Punkt[10];
    Punkt *array_2 = new Punkt[10];
    for(int i=0;i<10;i++){
        array[i].cordinate_a=rand()%99+1;
        cout << i << ".Wspolrzedna a: " << array[i].cordinate_a << " ";
        array[i].cordinate_b=rand()%99+1;
        cout << i << ".Wspolrzedna b: " << array[i].cordinate_b << " ";
        array[i].cordinate_c=rand()%99+1;
        cout << i << ".Wspolrzedna c: " << array[i].cordinate_c << " " << endl;
    }
    rewrite_array(array,array_2);
    cout << endl << endl << endl;
    for(int i=0;i<10;i++){
        cout << i << ".Wspolrzedna a w array2: " << array_2[i].cordinate_a << " ";
        cout << i << ".Wspolrzedna b w array2: " << array_2[i].cordinate_b << " ";
        cout << i << ".Wspolrzedna c w array2: " << array_2[i].cordinate_c << " " << endl;
    }


    cout << endl << endl << "Zadanie 5" << endl << endl;
    //Zadanie 5
    Punkt10 *p10_1= new Punkt10[10];


    cout << endl << endl << "Zadanie 6" << endl << endl;
    //Zadanie 6
    Punkt10 *p10_2 = new Punkt10[10];
    for(int i=0; i<10; i++){
        cout << "Wektor " << i << " :";
        for(int j=0; j<10; j++){
            p10_1[i].array[j]=rand()%10+1;
            cout << p10_1[i].array[j] << ",";
        }
        cout << endl;
    }
    rewrite_array_10(p10_1,p10_2,10);
    show_array_10(p10_2,10);


    cout << endl << endl << "Zadanie 7" << endl << endl;
    //Zadanie 7
    Punktn pn_1;
    pn_1.size=15;
    pn_1.array = new int[pn_1.size];
    for(int i=0; i<15; i++){
        pn_1.array[i]=rand()%10;
    }


    cout << endl << endl << "Zadanie 8" << endl << endl;
    //Zadanie 8
    for(int i=0; i<15; i++){
        pn_1.array[i]=i;
        cout << pn_1.array[i] << ",";
    }
    cout << endl << endl;
    Punktn pn_2;
    pn_2.size=15;
    pn_2.array = new int[pn_2.size];
    int j=0;
    for(int i=0; i<15; i++){
        pn_2.array[i]=j;
        j+=2;
        cout << pn_2.array[i] << ",";
    }
    cout << endl << endl;
    Punktn pn_3;
    pn_3.size=15;
    pn_3.array = new int[pn_3.size];
    for(int i=0, j=0; i<15; i++, j+=3){
        pn_3.array[i]=j;
        cout << pn_3.array[i] << ",";
    }
    rewrite_array_n_to_array_n2(pn_1,pn_2,pn_3,15);
    rewrite_array_n_to_array_n_copy(pn_1,pn_2,15);


    cout << endl << endl << "Zadanie 9" << endl << endl;
    //Zadanie 9

    cout << endl << endl << "Zadanie 10" << endl << endl;
    //Zadanie 10

    Zespolone z1;
    z1.Re=4;
    z1.Im=2;
    Zespolone z2;
    z2.Re=6;
    z2.Im=8;

    cout << "Suma liczb zespolonych wynosi: " << add_int(z1,z2).Re << "+" << add_int(z1,z2).Im <<"i" << endl;

    Zespolone *z4 = new Zespolone;
    z4->Re=4;
    z4->Im=2;
    Zespolone *z5 = new Zespolone;
    z5->Re=6;
    z5->Im=8;

    cout << "Suma liczb zespolonych wynosi: " << add_point(z4,z5)->Re << "+" << add_point(z4,z5)->Im <<"i" << endl;

    cout << endl << endl << "Na macierze" << endl;
    cout << "Zadanie 1" << endl << endl;
    //Zadanie 1

    Mother m1;
    m1.dim_1=rand()%9+1;
    m1.dim_2=rand()%7+3;

    m1.pointer = new int *[m1.dim_1];
    for(int i=0; i<m1.dim_1; i++){
        m1.pointer[i] = new int [m1.dim_2];
    }
    for(int i=0; i<m1.dim_1; i++){
        for(int j=0; j<m1.dim_2; j++){
            m1.pointer[i][j]=rand()%70;
            cout << "[" << m1.pointer[i][j] << "]";
        }
        cout << endl;
    }
    for(int i=0; i<m1.dim_1; i++){
        delete [] m1.pointer[i];
    }
    delete [] m1.pointer;


    cout << endl << endl << "Zadanie 2" << endl << endl;
    //Zadanie 2

    return 0;
}
