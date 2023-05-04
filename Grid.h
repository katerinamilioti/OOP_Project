#ifndef __GRID_H
#define __GRID_H

#include <iostream>
#include <cstring>
#include <vector>
#include "Squares.h"

using namespace std;

class Grid
{
private:
    int a; // grid's length
    int b; // grid's width
    int i; // square's row where the heroes are located
    int j; // square's column where the heroes are located
    vector<vector<Square *>> square;

public:
    Grid(int, int);
    void create_weapons(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>);
    void create_armors(vector<string>, vector<double>, vector<int>, vector<int>);
    void create_potions(vector<string>, vector<double>, vector<int>, vector<int>);
    void create_icespells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    void create_firespells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    void create_lightingspells(vector<string>, vector<double>, vector<int>, vector<int>, vector<int>, vector<int>);
    void create_heroes(string, string);
    void create_heroesteam();
    void display_heroes();
    void moveup();
    void seti();
    void setj();
    int moveiup();
    int moveidown();
    int movejright();
    int movejleft();
    int geti();
    int getj();
    int geta();
    int getb();
    void movedown();
    void moveright();
    void moveleft();
    void displayMaP();
    void displayMarket();
};

#endif