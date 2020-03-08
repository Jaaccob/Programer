#include <iostream>
#include <math.h>

using namespace std;

void zad16()
{
    float x[2],y[2], od[2], z;
    for (int i=0; i<2; i++)
    {
        cin >> x[i];
        cin >> y[i];
        od[i]=sqrt(pow((x[i]),2)+pow((y[i]),2));
    }
    z=od[0]-od[1];
    if (z<0) cout << -z;
    else cout << z;

}


//Tablice :
/*zad1
 */
/*
void funkcja(int x)
{
    if(x&1==1) cout << "Nieparzysta";
    else cout << "Parzysta";
}
int main()
{
    int x; cout << "Podaj liczbe: ";
    cin >> x;
    funkcja(x);
    return 0;
 */
}/*zad2
  */
/*
void funkcja(int x)
{
    printf(%d \n, !(x&x-1))
}
int main()
{
    int x;
    cin >> x;
    funkcja(x);
}
 */
/*zad4
 */
/*
void funkcja(int x)
{
    printf("%d \n", x|192);
}
int main()
{
    int x;
    cin >> x;
    funkcja(x);
}*/

/*zad8
 */
/*
int funkcja(int n)
{
    int tab[n];
    tab[0]=1;
    for (int i=1; i<n; i++)
    {
        tab[i]=tab[i-1]+1;
    }
    for (int j=2; j*j<=n; j++)
    {
        for (int i=1; i<n; i++)
        {
            if(tab[i]%j==0)
            {
                tab[i]=0;
            }
        }
    }
    int max=0;
    for (int i=0; i<n; i++)
    {
        if(tab[i]!=0 && tab[i]>max) max=tab[i];
    }
    return max;
}


int main()
{
    int n;
    cout << "Podaj liczbe: " << endl;
    cin >> n;
    cout << funkcja(n);
}
*/

/*zad15
 */
/*
void funkcja(int n)
{
    int tab[n];
    for (int i=0; i<n; i++)
    {
        tab[i]=i+1;
        cout << tab[i];
    }
    cout << endl;
    int k;
    k=tab[n-1];
    for (int i=n-1; i>0; i--)
    {
        tab[i]=tab[i-1];
    }
    tab[0]=k;
    for (int i=0; i<n; i++) cout << tab[i];
}

int main()
{
    int n;
    cout << "Podaj liczbe: " << endl;
    cin >> n;
    funkcja(n);
    return 0;
}
 */

//Struktury:
struct zespolone
{
    double im,re;
};

zespolone *Fun(zespolone *l1, zespolone *l2)
{
    zespolone *w=new zespolone;
    w->re=l1->re+l2->re;
    w->im=l1->im+l2->im;
    return w;
}

void Wys(zespolone *l)
{
    cout << l->re << "+" << l->im << endl;
}
*/
/*

int main()
{
    zespolone *l1=new zespolone, *l2=new zespolone;
    l1->re=2.3;
    l1->im=2.4;
    l2->re=4.5;
    l2->im=5.1;
    cout << "Suma liczb: " << endl;
    Wys((Fun(l1,l2)));
    cout << endl;
    delete l1,l2;
    return 0;
}
 */

/*
struct trojkat
{
    unsigned int a,b,c;
};

unsigned int Fun(trojkat a)
{
    return a.a+a.b+a.c;
}
int main()
{
    trojkat d;
    cin >> d.a >> d.b >> d.c;
    cout << Fun(d) << endl;
    return 0;
}
*/
/*
void Fun(trojkat troj1, trojkat *troj2)
{
    troj2->a=troj1.a;
    troj2->b=troj1.b;
    troj2->c=troj1.c;
}

void Fun2(trojkat *troj2)
{
    cout << troj2->a << endl << troj2->b << endl << troj2->c << endl;
}

int main()
{
    trojkat troj1, *troj2=new trojkat;
    cin >> troj1.a >> troj1.b >> troj1.c;
    cout << endl; Fun(troj1,troj2);
    Fun2(troj2);
    cout << endl;
    return 0;
}
*/
/*
struct punkt
{
    float a, b, c;
};

float DistPoint(punkt *tab, int n)
{
    float min=sqrt(pow(tab[0].a-tab[1].a,2)+pow(tab[0].b-tab[1].b,2)+pow(tab[0].c-tab[1].c,2));
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(sqrt(pow(tab[i].a-tab[j].a,2)+pow(tab[i].b-tab[j].b,2)+pow(tab[i].c-tab[j].c,2))<min && i!=j)
            {
                min=sqrt(pow(tab[i].a-tab[j].a,2)+pow(tab[i].b-tab[j].b,2)+pow(tab[i].c-tab[j].c,2));
            }
        }
    }
    return min;
}
int main()
{
    srand(time(NULL));
    punkt *tab=new punkt [10];
    for (int i=0; i<10; i++)
    {
        tab[i].a=rand()%99+1;
        cout << tab[i].a << " ";
        tab[i].b=rand()%99+1;
        cout << tab[i].b << " ";
        tab[i].c=rand()%99+1;
        cout << tab[i].c << endl;
    }
 cout << DistPoint(tab,10);
}
*/
/*
void Fun(punkt *tab1, punkt *tab2, int n)
{
    for (int i=0; i<n; i++)
    {
        tab2[i].a=tab1[i].a;
        tab2[i].b=tab1[i].b;
        tab2[i].c=tab1[i].c;
    }
}
*/

/*
struct punkt10
{
    float tab[10];
};

void Fun(punkt10 *tab1, punkt10 *tab2, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<10; j++)
        {
            tab2[j].tab[i]=tab1[j].tab[i];
        }
    }
}
void Fun(punkt10 *tab2, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout << tab2[j].tab[i];
        }
        cout << endl;
    }
}

int main()
{
    return 0;
}*/

/*
class trojkat
{
public:
    float wysokosc, podstawa;
    void wczytaj();
    void wyswietl();
    float pole();
};

void trojkat::wczytaj()
{
    cout << "wysokosc, podstawa:";
    cin >> wysokosc >> podstawa;
}

void trojkat::wyswietl()
{
    cout << wysokosc << endl << podstawa << endl;
}

float trojkat::pole()
{
    return wysokosc*podstawa/2;
}

int main()
{
    trojkat t1;
    t1.wczytaj();
    t1.wyswietl();
    cout << t1.pole() << endl;
}
 */



//Rekurencja:
/*zad7 z funkcji
*/
/*
void funkcja(bool n)
{
    if(n==true)
    {
        for (int i=999; i<10000; i++) cout << i << endl;
    }
    if(n==false)
    {
        for (int i=1; i<10; i++)
        {
            for (int j=0; j<10; j++)
            {
                for (int k=0; k<10; k++)
                {
                    for (int l=0; l<10; l++)
                    {
                        if(i!=j && i!=k && i!=l && k!=l && k!=j && j!=l)
                        {
                            cout << i*1000+j*100+k*10+l << endl;
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    bool n;
    cout << "Wybierz 0 dla kombinacji bez powtorzen lub 1 dla powtorzen: " << endl;
    cin >> n;
    funkcja(n);

    return 0;
}
*/
/*zad8
 */
/*
int euklid(int n, int m)
{
    if(n%m==0) return m;
    else
    {
        return euklid(m, n%m);
    }
}

int main()
{
    int n,m;
    cout << "Podaj wieksza liczbe: " << endl;
    cin >> n;
    cout << "Podaj mniejsza liczbe: " << endl;
    cin >> m;
    cout << "Najwiekszy wspolny dzielnik, to: " << euklid (n,m) << endl;
    return 0;
}
*/
/*zad9
 */
/*
int silnia(int n)
{
    if (n==0) return 1;
    else
    {
        return silnia(n)*silnia(n-1);
    }
}

int main()
{
    int n;
    cout << "Podaj liczbe: " << endl;
    cin >> n;
    cout << "Silnia tej liczby, to: " << silnia(n) << endl;
    return 0;
}
*/
/*zad10*/
/*zad10
 */
/*
int funkcja(unsigned int X)
{
    if(X==0)
    {
        cout << "0" << endl;
        return 0;
    }
    else
    {
        cout << X << endl;
        X--;
        return funkcja(X);

    }
}

int main()
{
    cout << "Podaj liczbe: " << endl;
    unsigned int X;
    cin >> X;
    funkcja(X);
    return 0;
}
*/






