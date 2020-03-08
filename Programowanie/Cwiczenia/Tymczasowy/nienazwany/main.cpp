#include <iostream>
#include <time.h>
#include <cstdlib>


using namespace std;


void Fun(int **tab1, int *tab2, int n)

{

    tab1=new int *[n];
    cout << endl << endl;
    for (int i=0; i<n; i++)

    {

        tab1[i]=new int [tab2[i]];

        for (int j=0; j<(tab2[i]); j++)

        {

            tab1[i][j]=tab2[i];
            cout << tab1[i][j] << ",";

        }
        cout << endl;

    }


}



int main()

{

    srand (time(NULL));

    cout << "Podaj ilosc elementow: " << endl;

    int n;

    cin >> n;

    int *tab2=new int [n];

    for (int i=0; i<n; i++)

    {

        tab2[i]=rand()%14+2;

        cout << tab2[i] << "  ";

    }

    int **tab1;

    Fun(tab1,tab2,n);

    for (int i=0; i<n; i++)

    {

        for (int j=0; j<tab2[i]; j++)

        {

            cout << tab1[i][j] << "  ";

        }

        cout << endl;

    }

    for (int i=0; i<n; i++)

    {

        delete [] tab1[i];

    }

    delete [] tab1;

    delete [] tab2;

    return 0;

}
