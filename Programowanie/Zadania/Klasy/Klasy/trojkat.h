#include <iostream>

using namespace std;

class Trojkat{
    double podstawa, wysokosc;
public:
    Trojkat(double=1,double=1);
    ~Trojkat();
    void load();
    void show();
    double pole();

};
