#ifndef __HEROESTEAM_H
#define __HEROESTEAM_H

#include <vector>
#include <cstring>
#include "Livings.h"

class HeroesTeam
{
private:
    vector<Hero *> heroes;

public:
    void createahero(string, string);
    void display_heroes();
};

#endif