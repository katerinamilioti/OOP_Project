#include <iostream>
#include <vector>
#include "Squares.h"

using namespace std;

Square::Square()
{
}

void Square::create_weapons(vector<string> name, vector<double> price, vector<int> low_level, vector<int> damage, vector<int> hands)
{
}

void Square::create_armors(vector<string> name, vector<double> price, vector<int> low_level, vector<int> reducedamage)
{
}

void Square::create_potions(vector<string> name, vector<double> price, vector<int> low_level, vector<int> increase)
{
}

void Square::create_icespells(vector<string> name, vector<double> price, vector<int> lowlevel, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
}

void Square::create_firespells(vector<string> name, vector<double> price, vector<int> lowlevel, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
}

void Square::create_lightingspells(vector<string> name, vector<double> price, vector<int> lowlevel, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
}

void Square::create_heroesteam()
{
}

void Square::create_heroes(string, string)
{
}

void Square::display_Market()
{
}

int Square::get_s()
{
    return s;
}

void Square::setheroesteam(int i)
{
    this->heroesteam = i;
}

int Square::getheroesteam()
{
    return this->heroesteam;
}

void Square::display_heroes()
{
    team->display_heroes();
}

SquarewithMarket::SquarewithMarket()
{
    m = new Market();
    this->s = 1;
}

Market *SquarewithMarket::get_market()
{
    return m;
}

void SquarewithMarket::create_weapons(vector<string> name, vector<double> price, vector<int> low_level, vector<int> damage, vector<int> hands)
{
    get_market()->create_weapons(name, price, low_level, damage, hands);
}

void SquarewithMarket::create_armors(vector<string> name, vector<double> price, vector<int> low_level, vector<int> reducedamage)
{
    get_market()->create_armors(name, price, low_level, reducedamage);
}

void SquarewithMarket::create_potions(vector<string> name, vector<double> price, vector<int> low_level, vector<int> increase)
{
    get_market()->create_potions(name, price, low_level, increase);
}

void SquarewithMarket::create_icespells(vector<string> name, vector<double> price, vector<int> lowlevel, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
    get_market()->create_icespells(name, price, lowlevel, lowdamage, highdamage, magicpower);
}
void SquarewithMarket::create_firespells(vector<string> name, vector<double> price, vector<int> lowlevel, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
    get_market()->create_firespells(name, price, lowlevel, lowdamage, highdamage, magicpower);
}
void SquarewithMarket::create_lightingspells(vector<string> name, vector<double> price, vector<int> lowlevel, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
    get_market()->crate_lightingspells(name, price, lowlevel, lowdamage, highdamage, magicpower);
}

void SquarewithMarket::create_heroes(string hero, string heroname)
{
    team->createahero(hero, heroname);
    this->heroesteam = 1;
}

void SquarewithMarket::create_heroesteam()
{
    team = new HeroesTeam();
}

void SquarewithMarket::display_Market()
{
    get_market()->print_usables();
}

Common::Common()
{
    this->s = 2;
}

NonAccessible::NonAccessible()
{
    this->s = 3;
}
