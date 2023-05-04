#ifndef __ITEMS_H
#define __ITEMS_H
#include <iostream>
#include <cstring>
// #include"Livings.h"
#include "Usables.h"

using namespace std;

class Item : public Usable
{
private:
    int it; // variable is used to show what type of item is
public:
    Item(string, double, int);
    ~Item();
    virtual int get_reduce_damage();
    void set_it(int);
    int get_it();
};

class Weapon : public Item
{
private:
    int damage;
    int hands;

public:
    Weapon(string, double, int, int, int);
    ~Weapon();
    int get_damage();
    int get_hands();
};

class Armor : public Item
{
private:
    int reduce_damage;

public:
    Armor(string, double, int, int);
    ~Armor();
    int get_reduce_damage();
};

class Potion : public Item
{
private:
    int increase;
    int usage;

public:
    Potion(string, double, int, int, int);
    ~Potion();
    int get_increase();
    int get_usage();
    void set_usage();
};

#endif