#include <iostream>
#include "Spells.h"

using namespace std;

Spell::Spell(string n, double p, int l, int ld, int hd, int a) : Usable(n, p, l)
{
    this->low_damage = ld;
    this->high_damage = hd;
    this->amount_magicpower = a;
    cout << "A New Spell has been created!" << endl;
}

void Spell::set_sp(int i)
{
    sp = i;
}

int Spell::get_sp()
{
    return this->sp;
}

Spell::~Spell()
{
    cout << "A Spell to be destroyed!" << endl;
}

IceSpell::IceSpell(string n, double p, int l, int ld, int hd, int a) : Spell(n, p, l, ld, hd, a)
{
    cout << "A IceSpell has been created!" << endl;
}

IceSpell::~IceSpell()
{
    cout << "An IceSpell to be destroyed!" << endl;
}

FireSpell::FireSpell(string n, double p, int l, int ld, int hd, int a) : Spell(n, p, l, ld, hd, a)
{
    cout << "A FireSpell has been created!" << endl;
}

FireSpell::~FireSpell()
{
    cout << "A FireSpell to be destroyed!" << endl;
}

LightingSpell::LightingSpell(string n, double p, int l, int ld, int hd, int a) : Spell(n, p, l, ld, hd, a)
{
    cout << "A LIghtingSpell has been created!" << endl;
}

LightingSpell::~LightingSpell()
{
    cout << "A LightingSpell to be destroyed!" << endl;
}