#include <iostream>

using namespace std;

int previous(int *a, int *b){
    cout << a << endl;
    cout << b << endl;
    if(a>b){
        return *b;
    }
    else return *a;
}
void z1(){
    system("cls");

    int array[5] = {1,2,3,4,5};
    int *a=&array[3];
    int *b=&array[2];
    cout << previous(a,b) << endl;

    a=&array[1];
    b=&array[3];
    cout << previous(a,b) << endl;

    a=&array[4];
    b=&array[3];
    cout << previous(a,b) << endl;

    getchar();getchar();
}
float *sum(float *a, float *b){
    *a+=*b;
    return a;
}
void z2(){
    system("cls");


    cout << "Podaj 2 liczby typu float: ";
    float variable_1, variable_2;
    cin >> variable_1 >> variable_2;
    float *pointer_1 = &variable_1, *pointer_2 = &variable_2;
    cout << "Suma twoich liczb wynosi: " << *sum(pointer_1,pointer_2);
    cin >> variable_1 >> variable_2;
    cout << "Suma twoich liczb wynosi: " << *sum(pointer_1,pointer_2);
    cin >> variable_1 >> variable_2;
    cout << "Suma twoich liczb wynosi: " << *sum(pointer_1,pointer_2);


    getchar();getchar();
}
int delete_int(int *pointer_to_array,int size,int intiger){
    for(int i=0; i<size; i++){
        if(pointer_to_array[i]==intiger){
            pointer_to_array[i]=0;
        }
    }
}

float move_point(){

}
struct Point{
    float x,y;
    float x_1,y_1;

    float (Point::*wsk)();




};




void color_to_r_g_b(int color){
    int maska=0x0000FF;
    int r,g,b;
    b=color&maska;
    cout << "Niebieski: " << b << endl;
    maska=0x00FF00;
    g=color&maska;
    cout << "Zielony: " << g << endl;
    g=g>>8;
    cout << "Zielony: " << g << endl;
    maska=0xFF0000;
    r=color&maska;
    cout << "Czerwony: " << r << endl;
    r=r>>16;
    cout << "Czerwony: " << r << endl;

}
void z12(){

    system("cls");

    cout << "Podaj swoj kolor: ";
    int color=0xcc66ff;
    color_to_r_g_b(color);


    getchar();getchar();
}
int main()
{
    int wybor=1;
    while (wybor) {
        system("cls");
        cout << "Zadanie 1." << endl;
        cout << "Zadanie 2." << endl;
        cout << "Zadanie 3." << endl;
        cout << "Zadanie 4." << endl;
        cout << "Zadanie 5." << endl;
        cout << "Zadanie 6." << endl;
        cout << "Zadanie 7." << endl;
        cout << "Zadanie 8." << endl;
        cout << "Zadanie 9." << endl;
        cout << "Zadanie 10." << endl;
        cout << "Zadanie 11." << endl;
        cout << "Zadanie 12." << endl;
        cout << "Zadanie 13." << endl;
        cout << "Zadanie 14." << endl;
        cout << "Zadanie 15." << endl;
        cout << "Zadanie 16." << endl;
        cout << "Zadanie 17." << endl;
        cout << "Zadanie 18." << endl;
        cout << "Zadanie 19." << endl;
        cout << "Zadanie 20." << endl;
        cout << endl << endl << "Wybierz Zadanie: ";
        cin >> wybor;
        switch (wybor) {
            case 0: break;
        case 1: z1(); break;
        case 2: z2(); break;
            case 3: break;
            case 4: break;
            case 5: break;
            case 6: break;
            case 7: break;
            case 8: break;
            case 9: break;
            case 10: break;
            case 11: break;
        case 12: z12(); break;
            case 13: break;
            case 14: break;
            case 15: break;
            case 16: break;
            case 17: break;
            case 18: break;
            case 19: break;
            case 20: break;
            default: cout << "Brak takiego zadania!!"; break;
        }
    }
    return 0;
}
