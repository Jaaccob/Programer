#include <iostream>
#include "Monitor.h"

using namespace std;

void Monitor::shadow(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            array[i][j].shadow();
        }
    }
}
Monitor::Monitor(){

}
Monitor::~Monitor(){
    cout << "Destruktor klasy Monitor" << endl;
}
