#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <cmath>
#include <time.h>
#include <vector>
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<algorithm>

using namespace std;

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

void Zad1()
{
    int (*Fun)(int,int);
    int a,b;
    cin >> a >> b;
    Fun=add;
    cout << Fun(a,b) << endl;
    Fun=sub;
    cout << Fun(a,b) << endl;
}


int mn(int a, int b)
{
    return a*b;
}
int dz(int a, int b)
{
    return a/b;
}

void Zad2()
{
    int a=10,b=5,x;
    cout << "0.Dodawanie" << endl << "1.Odejmowanie" << endl <<
            "2.Mnozenie" << endl << "3.Dzielenie" << endl;
    cin >> x;
    int (*w)(int, int);
    switch(x)
    {
        case 0:
            w=add;
            break;
        case 1:
            w=sub;
            break;
        case 2:
            w=mn;
            break;
        case 3:
            w=dz;
            break;
    }
    cout << w(a,b) << endl;
}

int *max(int *tab, int n)
{
    int *w=new int;
    *w=tab[0];
    for (int i=0; i<n; i++)
    {
        if(tab[i]>*w) *w=tab[i];
    }
    return w;
}

int *min(int *tab, int n)
{
    int *w=new int;
    *w=tab[0];
    for (int i=0; i<n; i++)
    {
        if(tab[i]<*w) *w=tab[i];
    }
    return w;
}

void Zad3()
{
    int n;
    cin >> n;
    int *tab=new int [n];
    int *(*w)(int*, int);
    for (int i=0; i<n; i++)
    {
        tab[i]=rand()%99+1;
        cout << tab[i] << "  ";
    }
    bool wybor;
    cout << endl;
    cout << "1: najwiekszy" << endl << "0: najmniejszy" << endl;
    cin >> wybor;
    if(wybor==0) w=min;
    else w=max;
    cout << *w(tab,n) << endl;
    delete [] tab;
}

int malejaco(const void *a, const void *b)
{
    return (*(int *)a-*(int *)b);
}
int malejacy(const void *a, const void *b){
    return (*(int *)a-*(int *)b);
}

int rosnaco(const void *a, const void *b)
{
    return (*(int *)b-*(int *)a);
}
int rosnacy(const void *a, const void *b){
    return (*(int *)b-*(int *)a);
}

void Zad4()
{
    int tab[10];
    for (int i=0; i<10; i++)
    {
        tab[i]=rand()%99+1;
        cout << tab[i] << "  ";
    }
    cout << endl;
    int (*w)(const void*,const void*)=rosnaco;
    qsort(tab,10,sizeof(int),w);
        for (int i=0; i<10; i++)
    {
        cout << tab[i] << "  ";
    }
    cout << endl;
    w=malejaco;
    qsort(tab,10,sizeof(int),w);
    for (int i=0; i<10; i++)
    {
        cout << tab[i] << "  ";
    }
    cout << endl;
}
bool Zad5F(int a, int b)
{
    return (a>b);
}
void Zad5()
{
    int *str=new int[10];
    for(int i=0; i<10; i++)
    {
        str[i]=rand()%100+1;
        cout << str[i] << "  ";
    }
    cout << endl;
    bool (*w)(int,int)=Zad5F;
    sort(str,str+10,w);
    for(int i=0; i<10; i++)
    {
        cout << str[i] << "  ";
    }
    cout << endl;
        sort(str,str+10);
    for(int i=0; i<10; i++)
    {
        cout << str[i] << "  ";
    }
    cout << endl;
    delete [] str;
}

void Zad6()
{
    string napis;
    do
    {
        cout << "Podaj liczbe maksymalnie 10-cyfrowa: ";
        cin >> napis;
    }
    while(napis.length()>10);
    int x=atoi(napis.c_str())+10;
    cout << x;
    cout << endl;
    sprintf((char*)napis.c_str(), "%d", x);
    cout << napis << endl;
}

bool Zad7F(int a, int b)
{
    return a>b;
}
int Zad7F2(int *tab,int n,int x)
{
    for (int i=0; i<n; i++)
    {
        if(tab[i]==x) return i+1;
    }
    return -1;
}
void Zad7()
{
    cout << "Ilosc elementow: ";
    int n;
    cin >> n;
    int *tab=new int [n];
    for (int i=0; i<n; i++)
    {
        tab[i]=rand()%99+1;
        cout << tab[i] << "   ";
    }
    cout << endl;
    bool (*w)(int,int)=Zad7F;
    sort(tab,tab+n,w);
    for (int i=0; i<n; i++)
    {
        cout << tab[i] << "   ";
    }
    cout << endl;
    cout << "Liczba do wyszukania: ";
    int x;
    cin >> x;
    cout << Zad7F2(tab,n,x);
    cout << endl;
    delete [] tab;
}

void Zad8F(int *matrix,int N)
{
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            matrix[i*j]=(i+1)*(j+1);
            cout << matrix[i*j] << "  ";
        }
        cout << endl;
    }
}

void Zad8()
{
    int N;
    cin >> N;
    int matrix[(int)pow(N,2)];
    Zad8F(matrix,N);
}

float **Zad9F(float *tab,int n, int m)
{
    float **tab2=new float *[n];
    for (int i=0; i<n; i++)
    {
        tab2[i]=new float [m];
        for (int j=0; j<m; j++)
        {
            if(j==0 || i==0 || i==n-1 || j==m-1)  tab2[i][j]=0;
            else tab2[i][j]=tab[i*j];
        }
    }
    return tab2;
}

void Zad9()
{
    int n,m;
    cin >> n >> m;
    float tab[n*m];
    for (int i=0; i<n*m; i++)
    {
        tab[i]=float(rand()%99+1);
        cout << tab[i] << "  ";
    }
    cout << endl << endl;
    float **w=Zad9F(tab,n,m);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout << w[i][j] << "  ";
        }
        delete [] w[i];
        cout << endl;
    }
    delete [] w;
}

void Zad10()
{
    int n,x;
    cin >> n >> x;
    int tab1[n], tab2[n];
    for (int i=0; i<n; i++)
    {
        tab1[i]=x;
        tab2[i]=x;
        x++;
    }
    int zamiana, random;
    for(int i=0; i<n; i++)
    {
        random=rand()%n;
        zamiana=tab2[0];
        tab2[0]=tab2[random];
        tab2[random]=zamiana;
    }
    for (int j=0; j<n; j++)
    {
        cout << tab1[j] << "  ";
    }
    cout << endl << endl;
    for (int j=0; j<n; j++)
    {
        cout << tab2[j] << "  ";
    }
    cout << endl << endl;
    for (int i=0; i<n; i++)
    {
        cout << tab1[i]+tab2[i] << "   ";
    }
    cout << endl << endl;
    int inner_p=0;
    for (int i=0; i<n; i++)
    {
        inner_p+=tab1[i]*tab2[i];
    }
    cout << inner_p << endl;

}

void Zad11()
{
    char *napis=new char[100];
    cin >> napis;
    int dl=0;
    while(napis[dl]!='\0') dl++;
    while(dl>=0) {
        cout << *(napis+dl);
        dl--;}
    cout << endl;
}
struct Student
{
    string imie;
    int marks[10];
    float av;
    bool operator < (const Student &x){
        return av>x.av;
    }
};

float Average(Student s)
{
    int suma;
    for (int i=0; i<10; i++)
    {
        suma+=s.marks[i];
    }
    return float(suma)/10;
}

int Compare(const void *a, const void *b)
{
    Student *s1, *s2;
    s1=(Student*)a;
    s2=(Student*)b;
    float cmp=s1->av-s2->av;
    cout << cmp << endl;
    if(cmp<0) return -1;
    if(cmp==0) return 0;
    if(cmp>0) return 1;
}

void Zad_odmarcel()
{
    Student s[10];
    for(int i=0;i<10;i++)
    {
        for (int j=0; j<10; j++)
        {
            s[i].marks[j]=rand()%6+1;
            cout << s[i].marks[j] << " ";
        }
    s[i].av=Average(s[i]);
    cout << endl;
    }
    //qsort(s,10,sizeof(s),Compare);
    sort(s,s+10);
        for(int i=0;i<10;i++)
    {
        for (int j=0; j<10; j++)
        {
            cout << s[i].marks[j] << " ";
        }
        cout << endl;
    }
}

struct student{  //stworzenie własnego typu o nazwie student
  char nazwisko[25];
  double srednia;
  bool operator < (const student &x)   //zdefiniowanie zachowania się
  {                                         //operatora < potrzebnego przy sortowaniu
    return srednia>x.srednia;
  }

};

int main()
{
    Zad_odmarcel();
    /*
  //stworzenie studentów i przypisanie do nich przykładowych danych
  student studenci[] = {            //tablica będzie się składać z 10 studentów
    {"Kowalski",  3.12},
    {"Kasprowicz",  4.40},
    {"Nowak",    6.00},
    {"Kosak",    5.44},
    {"Nasiadka",  5.32},
    {"Nowicki",    3.44},
    {"Kanigowski",  4.00},
    {"Danusiak",  4.00},
    {"Dworznik",  4.20},
    {"Kaminski",  3.00}
  };
  cout<<"Dane studentów przed sortowaniem: "<<endl;
  for(int i=0;i<10;i++)
    cout<<"Nazwisko: "<<studenci[i].nazwisko
    <<", srednia: "<<fixed<<setprecision(2)
    <<studenci[i].srednia<<endl;

  sort(studenci,studenci+10); //sortowanie studentów

  cout<<endl;
  cout<<"Dane studentów po sortowaniu: "<<endl;
  for(int i=0;i<10;i++)
    cout<<"Nazwisko: "<<studenci[i].nazwisko
    <<", srednia: "<<fixed<<setprecision(2)
    <<studenci[i].srednia<<endl;
  system("pause");
  return 0;*/

/*
 *
 */
/*int main()
{
    srand(time(NULL));
    int x;
    bool exit=false;
    while (exit==false)
    {
        cout << "Zad 1-11" << endl << "12 Koniec" << endl;
        cin >> x;
        switch (x)
        {
            case 1:
                Zad1();
                break;
            case 2:
                Zad2();
                break;
            case 3:
                Zad3();
                break;
            case 4:
                Zad4();
                break;
            case 5:
                Zad5();
                break;
            case 6:
                Zad6();
                break;
            case 7:
                Zad7();
                break;
            case 8:
                Zad8();
                break;
            case 9:
                Zad9();
                break;
            case 10:
                Zad10();
                break;
            case 11:
                Zad11();
                break;
            case 12:
                exit=true;
                break;
        }
    }
    return 0;
}*/
/*int main()
{
   double tablica[5] = {2, 3, 9, 16, 25};
   vector<double> v(tablica, tablica+5);
   vector<double> wyniki(5);

   transform(v.begin(), v.end(), wyniki.begin(), (double (*) (double)) sqrt );
   for( int i=0; i<5; i++ )
      cout << wyniki[i] << '\n';
    Zad_odmarcel();
}*/

}
