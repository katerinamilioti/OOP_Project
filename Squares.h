#ifndef __SQUARES_H
#define __SQUARES_H
#include <iostream>
#include <cstring>
#include <vector>
#include "Market.h"
#include "HeroesTeam.h"

using namespace std;

class Square
{
protected:
    int s;          // variable shows the type of the square
    int heroesteam; // variable shows whether the heroes are inside the square
    HeroesTeam *team;

public:
    Square();
    int get_s();
    virtual void create_weapons(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>);
    virtual void create_armors(vector<string>, vector<double>, vector<int>, vector<int>);
    virtual void create_potions(vector<string>, vector<double>, vector<int>, vector<int>);
    virtual void create_icespells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    virtual void create_firespells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    virtual void create_lightingspells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    virtual void create_heroes(string, string);
    virtual void create_heroesteam();
    virtual void display_Market();
    void setheroesteam(int);
    int getheroesteam();
    void display_heroes();
};

class SquarewithMarket : public Square
{
private:
    Market *m;

public:
    SquarewithMarket();
    void create_weapons(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>);
    void create_armors(vector<string>, vector<double>, vector<int>, vector<int>);
    void create_potions(vector<string>, vector<double>, vector<int>, vector<int>);
    void create_icespells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    void create_firespells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    void create_lightingspells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    void create_heroes(string, string);
    Market *get_market();
    void create_heroesteam();
    void display_Market();
};

class Common : public Square
{
private:
    HeroesTeam *team;

public:
    Common();
};

class NonAccessible : public Square
{
private:
public:
    NonAccessible();
};

#endif
