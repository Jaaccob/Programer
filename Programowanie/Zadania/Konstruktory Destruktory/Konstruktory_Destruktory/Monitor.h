#include <iostream>
#include "piksel.h"

using namespace std;

class Monitor{
    Piksel array[5][5];
    string name;
public:
    Monitor();
    ~Monitor();
    void shadow();
};
