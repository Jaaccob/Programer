#include<stdio.h>

int main(){
    /*
        Przyk�ad 1
    */

    char* przedmiot = "Koszulka Adidas";
    char rozmiar = 'L';
    float cena = 99.99;
    double wartosc = 3.53432;
    printf("%s\n\n", przedmiot);
    printf("Rozmiar %c\n", rozmiar);
    printf("Cena %g z�.\n", cena);
    printf("Cena %f z�.\n", cena);
    printf("Cena %.3f z�.\n", cena);
    printf("Warto�� %g z�.\n", wartosc);
    printf("Warto�� %f z�.\n", wartosc);
    printf("Warto�� %.2f z�.\n", wartosc);

    printf("Cena w promocji -90%: %g\n", cena-(cena*0.9));
    printf("Cena w promocji -90%: %g\n", cena*0.1);

    printf("\n\n");


    //Przyk�ad 2

    int liczba = 255.5;
    printf("Liczba w systemie dziesietnym: %d\n", liczba);
    printf("Liczba w systemie �semkowym: %o\n", liczba);
    printf("Liczba w systemie szesnastkowym: %x\n", liczba);

    printf("Ta sama liczba jako zmiennoprzecinkowa: %f\n", liczba);
    printf("Ta sama liczba jako zmiennoprzecinkowa: %f\n", liczba*1.0);
    printf("Ta sama liczba jako zmiennoprzecinkowa: %f\n", (float)liczba);

    printf("\n\n");

    //Przyk�ad 3

    printf("%d %s %c %g", 20, "Kisioj", 'K', 499.99);

}
