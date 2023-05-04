#include <iostream>
#include "Items.h"

using namespace std;

Item::Item(string n, double p, int l) : Usable(n, p, l)
{
}

int Item::get_reduce_damage()
{
    return 0;
}

void Item::set_it(int i)
{
    it = i;
}

int Item::get_it()
{
    return this->it;
}

Item::~Item()
{
    cout << "An Item to be destroyed!" << endl;
}

Weapon::Weapon(string n, double p, int l, int d, int h) : Item(n, p, l)
{
    cout << "A New Weapon has been created!" << endl;
    this->damage = d;
    this->hands = h;
}

Weapon::~Weapon()
{
    cout << "A Weapon to be destroyed!" << endl;
}

int Weapon::get_damage()
{
    return this->damage;
}

int Weapon::get_hands()
{
    return this->hands;
}

Armor::Armor(string n, double p, int l, int r) : Item(n, p, l)
{
    cout << "An Armor has been created!" << endl;
    this->reduce_damage = r;
}

Armor::~Armor()
{
    cout << "An Armor to be destroyed!" << endl;
}

int Armor::get_reduce_damage()
{
    return this->reduce_damage;
}

Potion::Potion(string n, double p, int l, int i, int u) : Item(n, p, l)
{
    cout << "A Potion has been created!" << endl;
    this->increase = i;
}

Potion::~Potion()
{
    cout << "A POtion to be destroyed!" << endl;
}

int Potion::get_increase()
{
    return this->increase;
}

int Potion::get_usage()
{
    return this->usage;
}

void Potion::set_usage()
{
    this->usage = 1;
}
