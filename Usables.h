#ifndef __USABLES_H
#define __USABLES_H

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Usable
{
protected:
    string name;
    double price;
    int low_level;

public:
    Usable(string, double, int);
    ~Usable();
    string get_name();
    double get_price();
    int get_low_level();
};

#endif