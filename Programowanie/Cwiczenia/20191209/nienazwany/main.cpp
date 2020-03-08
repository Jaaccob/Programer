#include <iostream>
#include <time.h>
#include <cstdlib>


using namespace std;

int zadanie3(int tab[5][8] ,int n,int m){
    n=5;m=8;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab[i][j]=0;
            cout << tab[i][j] << ",";
        }
                    cout << endl;
    }



    return 0;
}
int zadanie11(){
    int n; cin >> n;
    int m; cin >> m;
    int **tab = new int *[n];
    for(int i=0; i<n; i++){
        tab[i] = new int [m];
    }
    srand(time(NULL));
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            tab[i][j] = rand()%5+1;
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=n; i>=0; i--){
        if(i<0) break;
        for(int j=m; j>=0; j--){
            tab[i][j]=tab[i-1][j-1];
            if(j<0) {tab[n-1][m-1]; break;}
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }


}


int zadanie9(){

    int n; cin >> n;
    int m; cin >> m;
    int **tab = new int *[n];
    for(int i=0; i<n; i++){
        tab[i] = new int [m];
    }
    srand(time(NULL));
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            tab[i][j] = rand()%5+1;
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    int najwieksza=tab[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(najwieksza<tab[i][j]) najwieksza=tab[i][j];
        }
    }

    for(int i=0; i<n; i++){
        delete [] tab[i];
    }
    delete [] tab;
    return najwieksza;

}



//Zadanie1
/*
int main()
{


    int tab[3][2]={{2,3},{2,5},{5,3}};
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }

    int n,m;
    cin >> n >> m;
    int tab[n][m];



    srand(time(NULL));

    for(int i=0;i<n*m; i++){
        tab[i][0]=rand()%10+1;
        tab[0][i]=rand()%10+1;
    }
    for(int i=0; i<n*m; i++){
        cout << tab[i][0] << ",";
        cout << tab[0][i] << "\n";
    }

    return 0;
}
*/
//Zadanie2
/*
int main(){
    srand(time(NULL));
    int **tab = new int *[5];
    for(int i=0; i<5; i++) {
        tab[i]=new int[8];
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<8; j++){
            tab[i][j]=rand()%10+1;
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    for (int i=0; i<5; i++){
    delete [] tab[i];
}
    delete [] tab;
    return 0;
}
*/
//Zadanie 3 Dokoncz
/*
int main(){
    srand(time(NULL));
    int **tab = new int *[5];
    for(int i=0; i<5; i++) {
        tab[i]=new int[8];
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<8; j++){
            tab[i][j]=rand()%10+1;
            cout << tab[i][j] << ",";
        }
        cout << endl;
    }
    zadanie3(tab[][],5,8);
    for (int i=0; i<5; i++){
    delete [] tab[i];
}
    delete [] tab;
    return 0;


}*/
//Zadanie 6
/*
int main(){
    int ***tab = new int **[5];
    for(int i=0; i<5; i++){
        tab[i] = new int *[5];
        for(int j=0; j<5; j++){
            tab[i][j] = new int [5];
        }
    }
    int suma=0;
    srand(time(NULL));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            for(int k=0; k<5; k++){
                tab[i][j][k]= rand()%5+1;
                cout << tab[i][j][k] << ",";
                suma+=tab[i][j][k];
            }
        }
    }
    cout << "\n\n Suma wynosi: " << suma;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            delete [] tab[i][j];
        }
    }
    for(int i=0; i<5; i++){
        delete [] tab[i];
    }
    delete [] tab;
    return 0;
}
*/
//Zadanie 8
/*
int main(){

    cout << zadanie9() << "Najwieksza liczba z twojej macierzy to: " << endl;

    return 0;
}
*/
//Zadanie 11
int main(){
    zadanie11();
    return 0;
}
