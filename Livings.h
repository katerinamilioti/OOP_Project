#ifndef __LIVINGS_H
#define __LIVINGS_H
#include <iostream>
#include <cstring>
#include "Items.h"

using namespace std;

class Living
{
protected:
    string name;
    int level;
    int healthPower;

public:
    Living(string, int, int);
    ~Living();
    void faint(Living *);
    int get_healthPower();
    int get_level();
    void reduse_healthPower(int);
    string get_name();
};

class Monster : public Living
{
private:
    int low_damage;
    int high_damage;
    int defence;
    double probability;

public:
    Monster(string, int, int, int, int, int, double);
    ~Monster();
    int get_low_damage();
    int get_high_damage();
    int get_defence();
    double get_probability();
    void reduce_healthPower(Monster *, int);
};

class Hero : public Living
{
private:
    int magicPower;
    int strength;
    int dexterity;
    int agility;
    double money;
    int experience;
    int object;

public:
    Hero(string, int, int, int, int, int, int, double, int);
    ~Hero();
    int get_magicPower();
    int get_strength();
    int get_dexterity();
    int get_agility();
    double get_money();
    int get_experience();
    int get_object();
    void level_up(Hero *);
    void increase_strength();
    void increase_dexterity();
    void increase_agility();
    void herois(int);
    void use_weapon(Monster *, Weapon *);
    void use_Armor(int, Weapon *);
    void increase_feature(string, Potion *);
};

class Warrior : public Hero
{
private:
    int x;

public:
    Warrior(string, int, int, int, int, int, int, double, int);
    ~Warrior();
};

class Sorcerer : public Hero
{
private:
public:
    Sorcerer(string, int, int, int, int, int, int, double, int);
    ~Sorcerer();
};

class Paladin : public Hero
{
private:
public:
    Paladin(string, int, int, int, int, int, int, double, int);
    ~Paladin();
};

// class Monster:public Living{
//     private:
//         int low_damage;
//         int high_damage;
//         int defence;
//         double probability;
//     public:
//         Monster(string , int  , int , int  , int , int  , double );
//         ~Monster();
//         int get_low_damage();
//         int get_high_damage();
//         int get_defence();
//         double get_probability();
//         void reduce_healthPower(Monster * , int );
// };

class Dragon : public Monster
{
private:
public:
    Dragon(string, int, int, int, int, int, double);
    ~Dragon();
};

class Exoskeleton : public Monster
{
private:
public:
    Exoskeleton(string, int, int, int, int, int, double);
    ~Exoskeleton();
};

class Spirit : public Monster
{
private:
public:
    Spirit(string, int, int, int, int, int, double);
    ~Spirit();
};

#endif