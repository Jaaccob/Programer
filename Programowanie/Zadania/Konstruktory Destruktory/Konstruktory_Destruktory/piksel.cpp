#include <iostream>
#include "piksel.h"

using namespace std;

Piksel::Piksel(unsigned char red, unsigned char green, unsigned char blue){
    r=red;
    g=green;
    b=blue;
}
Piksel::~Piksel(){
    cout << "Destruktor klasy Piksel" << endl;
}
void Piksel::shadow(){
    if(r+10>255 && g+10>255 && b+10>255){
        r-=(255-10);
        g-=(255-10);
        b-=(255-10);
    }
    else {
        r+=10;
        g+=10;
        b+=10;
    }
}
