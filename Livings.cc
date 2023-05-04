#include <iostream>
#include "Livings.h"

using namespace std;

Living::Living(string n, int l, int h) : name(n), level(l), healthPower(h)
{
}

Living::~Living()
{
    cout << "A Living to be destroyed!" << endl;
}

string Living::get_name()
{
    return name;
}

void Living::faint(Living *l)
{
    if (l->healthPower == 0)
    {
        cout << l->name << " faints" << endl;
    }
}

int Living::get_healthPower()
{
    return healthPower;
}

int Living::get_level()
{
    return level;
}

void Living::reduse_healthPower(int damage)
{
    this->healthPower = this->healthPower - damage;
}

Hero::Hero(string n, int l, int h, int m, int s, int d, int a, double money, int e) : Living(n, l, h)
{
    this->magicPower = m;
    this->strength = s;
    this->dexterity = d;
    this->agility = a;
    this->money = money;
    this->experience = e;
}

int Hero::get_agility()
{
    return this->agility;
}

int Hero::get_dexterity()
{
    return this->dexterity;
}

int Hero::get_experience()
{
    return this->experience;
}

int Hero::get_magicPower()
{
    return this->magicPower;
}

double Hero::get_money()
{
    return this->money;
}

int Hero::get_strength()
{
    return this->strength;
}

int Hero::get_object()
{
    return this->object;
}

void Hero::herois(int i)
{
    this->object = i;
}

void Hero::use_weapon(Monster *m, Weapon *w)
{
    m->reduce_healthPower(m, w->get_damage());
}

void Hero::use_Armor(int damage, Weapon *w)
{
    damage = damage - w->get_reduce_damage();
    reduse_healthPower(damage);
}

void Hero::increase_feature(string s, Potion *p)
{ // player picks the hero's feature he wants to increase
    if (s == "strength")
    {
        increase_strength();
    }
    else if (s == "dexterity")
    {
        increase_dexterity();
    }
    else if (s == "agility")
    {
        increase_agility();
    }
    p->set_usage(); // uses the potion only one time
}

Hero::~Hero()
{
    cout << "A Hero to be destroyed!" << endl;
}

void Hero::level_up(Hero *h)
{
    if (h->experience % 10 == 0)
    {
        cout << h->name << "levels up" << endl;
        h->level = h->level + 1; // player levels up
        h->strength = h->strength + 5;
        h->dexterity = h->dexterity + 5;
        h->experience = h->experience + 5;
    }
}

void Hero::increase_agility()
{
    if (this->object == 1)
    { // if hero is Warrior then strength and agility are increased by a larger amount compared to dexterity
        this->agility = this->agility + (this->level + 1) * 2;
    }
    else if (this->object == 2)
    { // if hero is Sorcerer then agility and dexterity are increased by a larger amount compared to strength
        this->agility = this->agility + (this->level + 1) * 3;
    }
    else
    { // if hero is Paladin then strength and dexterity are increased by a larger amount compared to agility
        this->strength = this->strength + (this->level + 1);
    }
}

void Hero::increase_dexterity()
{
    if (this->object == 1)
    {
        this->dexterity = this->dexterity + (this->level + 1);
    }
    else if (this->object == 2)
    {
        this->dexterity = this->dexterity + (this->level) * 2;
    }
    else
    {
        this->strength = this->strength + (this->level + 1) * 3;
    }
}

void Hero::increase_strength()
{
    if (this->object == 1)
    {
        this->strength = this->strength + (this->level + 1) * 3;
    }
    else if (this->object == 2)
    {
        this->strength = this->strength + (this->level + 1);
    }
    else
    {
        this->strength = this->strength + (this->level + 1) * 2;
    }
}

Warrior::Warrior(string n, int l, int h, int m, int s, int d, int a, double money, int e) : Hero(n, l, h, m, s, d, a, money, e)
{
    cout << "A Warrior has been created!" << endl;
}

Warrior::~Warrior()
{
    cout << "A Warrior to be destroyed!" << endl;
}

Sorcerer::Sorcerer(string n, int l, int h, int m, int s, int d, int a, double money, int e) : Hero(n, l, h, m, s, d, a, money, e)
{
    cout << "A Sorcerer has been created!" << endl;
}

Sorcerer::~Sorcerer()
{
    cout << "A Sorcerer to be destroyed!" << endl;
}

Paladin::Paladin(string n, int l, int h, int m, int s, int d, int a, double money, int e) : Hero(n, l, h, m, s, d, a, money, e)
{
    cout << "A Paladin has been created!" << endl;
}

Paladin::~Paladin()
{
    cout << "A Paladin to be destroyed!" << endl;
}

Monster::Monster(string n, int l, int h, int ld, int hd, int d, double p) : Living(n, l, h)
{
    cout << "A New Monster has been created!" << endl;
    this->low_damage = ld;
    this->high_damage = hd;
    this->defence = d;
    this->probability = p;
}

Monster::~Monster()
{
    cout << "A Monster to be desrtoyed!" << endl;
}

void Monster::reduce_healthPower(Monster *m, int d)
{
    m->healthPower = m->healthPower - d;
}

Dragon::Dragon(string n, int l, int h, int ld, int hd, int d, double p) : Monster(n, l, h, ld, hd, d, p)
{
    cout << "A New Dragon has been created!" << endl;
}

Dragon::~Dragon()
{
    cout << "A Dragon to be desrtoyed!" << endl;
}

Exoskeleton::Exoskeleton(string n, int l, int h, int ld, int hd, int d, double p) : Monster(n, l, h, ld, hd, d, p)
{
    cout << "A New Exoskeleton has been created!" << endl;
}

Exoskeleton::~Exoskeleton()
{
    cout << "A Exoskeleton to be destroyed!" << endl;
}

Spirit::Spirit(string n, int l, int h, int ld, int hd, int d, double p) : Monster(n, l, h, ld, hd, d, p)
{
    cout << "A New Spirit has been created!" << endl;
}

Spirit::~Spirit()
{
    cout << "A Spirit to be destroyed!" << endl;
}
