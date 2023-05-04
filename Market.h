#ifndef __MARKET_H
#define __MARKET_H
#include <iostream>
#include <cstring>
#include <vector>
#include "Spells.h"
#include "Items.h"

using namespace std;

class Market
{
private:
    vector<Item *> items;
    vector<Spell *> spells;

public:
    Market();
    void create_weapons(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>);
    void create_armors(vector<string>, vector<double>, vector<int>, vector<int>);
    void create_potions(vector<string>, vector<double>, vector<int>, vector<int>);
    void create_icespells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    void create_firespells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    void crate_lightingspells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    void print_usables();
};

#endif