#include <iostream>
#include <vector>
#include "Market.h"

using namespace std;

Market::Market()
{
}

void Market::create_weapons(vector<string> name, vector<double> price, vector<int> low_level, vector<int> damage, vector<int> hands)
{
    for (int i = 0; i < name.size(); i++)
    {
        Item *w = new Weapon(name[i], price[i], low_level[i], damage[i], hands[i]);
        items.push_back(w);
        w->set_it(1);
    }
}

void Market::create_armors(vector<string> name, vector<double> price, vector<int> low_level, vector<int> reduce_damage)
{
    for (int i = 0; i < name.size(); i++)
    {
        Item *a = new Armor(name[i], price[i], low_level[i], reduce_damage[i]);
        items.push_back(a);
        a->set_it(2);
    }
}

void Market::create_potions(vector<string> name, vector<double> price, vector<int> low_level, vector<int> increase)
{
    for (int i = 0; i < name.size(); i++)
    {
        Item *p = new Potion(name[i], price[i], low_level[i], increase[i], 0);
        items.push_back(p);
        p->set_it(3);
    }
}

void Market::create_icespells(vector<string> name, vector<double> price, vector<int> low_level, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
    for (int i = 0; i < name.size(); i++)
    {
        Spell *ice = new IceSpell(name[i], price[i], low_level[i], lowdamage[i], highdamage[i], magicpower[i]);
        spells.push_back(ice);
        ice->set_sp(1);
    }
}

void Market::create_firespells(vector<string> name, vector<double> price, vector<int> low_level, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
    for (int i = 0; i < name.size(); i++)
    {
        Spell *fire = new FireSpell(name[i], price[i], low_level[i], lowdamage[i], highdamage[i], magicpower[i]);
        spells.push_back(fire);
        fire->set_sp(2);
    }
}

void Market::crate_lightingspells(vector<string> name, vector<double> price, vector<int> low_level, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
    for (int i = 0; i < name.size(); i++)
    {
        Spell *light = new LightingSpell(name[i], price[i], low_level[i], lowdamage[i], highdamage[i], magicpower[i]);
        spells.push_back(light);
        light->set_sp(3);
    }
}

void Market::print_usables()
{
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i]->get_it() == 1)
        {
            cout << "Weapon: " << items[i]->get_name() << "\n";
            cout << "\t\t costs: " << items[i]->get_price() << " gold\n";
            cout << "\t\t can be used after: " << items[i]->get_low_level() << " level\n";
        }
        if (items[i]->get_it() == 2)
        {
            cout << "Armor: " << items[i]->get_name() << "\n";
            cout << "\t\t costs: " << items[i]->get_price() << " gold\n";
            cout << "\t\t can be used after: " << items[i]->get_low_level() << " level\n";
        }
        if (items[i]->get_it() == 3)
        {
            cout << "Potion: " << items[i]->get_name() << "\n";
            cout << "\t\t costs: " << items[i]->get_price() << " gold\n";
            cout << "\t\t can be used after: " << items[i]->get_low_level() << " level\n";
        }
    }
    for (int i = 0; i < spells.size(); i++)
    {
        if (spells[i]->get_sp() == 1)
        {
            cout << "IceSpell: " << spells[i]->get_name() << "\n";
            cout << "\t\t costs: " << spells[i]->get_price() << " gold\n";
            cout << "\t\t can be used after: " << spells[i]->get_low_level() << " level\n";
        }
        if (spells[i]->get_sp() == 2)
        {
            cout << "FireSpell: " << spells[i]->get_name() << "\n";
            cout << "\t\t costs: " << spells[i]->get_price() << " gold\n";
            cout << "\t\t can be used after: " << spells[i]->get_low_level() << " level\n";
        }
        if (spells[i]->get_sp() == 3)
        {
            cout << "LightingSpell: " << spells[i]->get_name() << "\n";
            cout << "\t\t costs: " << spells[i]->get_price() << " gold\n";
            cout << "\t\t can be used after: " << spells[i]->get_low_level() << " level\n";
        }
    }
}