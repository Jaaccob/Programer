#include <iostream>

using namespace std;

class Piksel{
    unsigned char r,g,b;
public:
    Piksel(unsigned char red=0, unsigned char green=0, unsigned char blue=0);
    ~Piksel();
    void shadow();
};
