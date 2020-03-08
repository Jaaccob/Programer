#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void program1();
char *fprogram1_1(char *napis_1, char *napis_2);
void program2();
char *fprogram2_1(char *napis_1, char *napis_2, int dlugosc);
void program3();
void fprogram3_1(char *napis, char tajne[]);
void program4();
void fprogram4_1(char *znaki, char samogloski[]);
void program5();
void program6();
void program7();
void program8();
void program9();
void program10();
void program11();
void program12();


int main()
{
    int wybor =1;
    while (wybor!=0) {
        system("cls");
        cout << "Zadanie 1" << endl << "Zadanie 2" << endl << "Zadanie 3" << endl << "Zadanie 4" << endl<< "Zadanie 5" << endl << "Zadanie 6" << endl << "Zadanie 7"
             << endl << "Zadanie 8" << endl << "Zadanie 9" << endl << "Zadanie 10" << endl << "Zadanie 11" << endl << "Zadanie 12" << endl;
        cout << "\n\n\nPodaj swoj wybor: ";
        cin >> wybor;
        switch (wybor) {
        case 1: program1();break;
            case 2: program2();break;
            case 3: program3();break;
            case 4: program4();break;
            case 5: program5();break;
            case 6: program6();break;
            case 7: program7();break;
            case 8: program8();break;
            case 9: program9();break;
            case 10: program10();break;
            case 11: program11();break;
            case 12: program12();break;
        }
    }
    return 0;
}
void program1(){
    system("cls");
    char *napis_1 = new char [100];
    char *napis_2 = new char[50];
    cout << "Podaj pierwszy napis: ";
    cin.ignore();
    cin.getline(napis_1,100);
    cout << "Podaj drugi napis: ";
    cin.getline(napis_2,100);

    cout << "Polonczony napis: " << fprogram1_1(napis_1,napis_2);

    delete [] napis_1;
    delete [] napis_2;

    getchar();getchar();
}
char *fprogram1_1(char *napis_1, char *napis_2){
    return strcat(napis_1,napis_2);
}
void program2(){
    system("cls");

    cout << "Podaj swoj 1 napis: ";
    string napis1, napis2;
    cin >> napis1;
    cout << "Podaj swoj 2 napis: ";
    cin >> napis2;
    char *napis22 = new char [napis2.length()];
    int dlugosc;
    if(napis1.length()<napis2.length()){
        dlugosc = napis1.length()+napis2.length();
    }
    else {
        dlugosc = napis1.length()*2;
    }
    char *napis21 = new char [dlugosc];

    strcpy(napis21,napis1.c_str());
    strcpy(napis22,napis2.c_str());

    cout << "Teraz zdanie wyglada tak: " << fprogram2_1(napis21,napis22,napis1.length());
    delete [] napis21;
    delete [] napis22;


    getchar();getchar();
}
char *fprogram2_1(char *napis_1, char *napis_2,int dlugosc){
    return strncat(napis_1,napis_2,dlugosc);
}
void program3(){
    system("cls");
    cout << "Podaj swoj Pin: ";
    char *napis = new char [100];
    cin.ignore();
    cin.getline(napis,100);
    cout << "Podaj tajne cyfry: ";
    char tajne[10];
    cin.getline(tajne,10);
    fprogram3_1(napis,tajne);
    for(int i=0; i<6; i++){
        cout << napis[i];
    }

    getchar();getchar();
}
void fprogram3_1(char *napis, char tajne[]){
    int dlugosc=0;
    while (napis[dlugosc]!='\0') {
        dlugosc++;
    }
    int k;
    for(int i=0; i<dlugosc; i++){
        k=strcspn(napis,tajne);
        if(k<dlugosc) napis[k]='*';
    }

}
void program4(){
    system("cls");
    cout << "Podaj swoj napis: ";
    string napis;
    cin.ignore();
    getline(cin,napis);
    char *znaki = new char [napis.length()];
    strcpy(znaki,napis.c_str());            //Zamiana z string na char
    char samogloski[6] = {'a','e','i','o','u','y'};

    fprogram4_1(znaki,samogloski);


    delete [] znaki;
    getchar();getchar();
}
void fprogram4_1(char *znaki, char samogloski[]){
    int i=0;
    while (znaki[i]!='\0') {
        i++;
    }
    int ilosc =0;
    char *k;
    for(int j=0;j<i;j++){
        k=strpbrk(znaki,samogloski);

    }

}
void program5(){
    system("cls");

    getchar();getchar();
}
void program6(){
    system("cls");

    getchar();getchar();
}
void program7(){
    system("cls");

    getchar();getchar();
}
void program8(){
    system("cls");

    getchar();getchar();
}
void program9(){
    system("cls");

    getchar();getchar();
}
void program10(){
    system("cls");

    getchar();getchar();
}
void program11(){
    system("cls");

    getchar();getchar();
}
void program12(){
    system("cls");

    getchar();getchar();
}
