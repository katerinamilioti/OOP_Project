#ifndef __SPELLS_H
#define __SPELLS_H
#include <iostream>
#include <cstring>
#include "Usables.h"
#include "Livings.h"

using namespace std;

class Spell : public Usable
{
private:
    int low_damage;
    int high_damage;
    int amount_magicpower;
    int sp; // variable is used to show what type of spell is
public:
    Spell(string, double, int, int, int, int);
    ~Spell();
    void set_sp(int);
    int get_sp();
};

class IceSpell : public Spell
{
private:
public:
    IceSpell(string, double, int, int, int, int);
    ~IceSpell();
};

class FireSpell : public Spell
{
private:
public:
    FireSpell(string, double, int, int, int, int);
    ~FireSpell();
};

class LightingSpell : public Spell
{
private:
public:
    LightingSpell(string, double, int, int, int, int);
    ~LightingSpell();
};

#endif