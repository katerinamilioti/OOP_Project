#include <iostream>
#include "Usables.h"

using namespace std;

Usable::Usable(string n, double p, int l) : name(n), price(p), low_level(l)
{
}

Usable::~Usable()
{
}

string Usable::get_name()
{
    return this->name;
}

double Usable::get_price()
{
    return this->price;
}

int Usable::get_low_level()
{
    return this->low_level;
}
