#include <vector>
#include "Livings.h"
#include "HeroesTeam.h"

using namespace std;

void HeroesTeam::createahero(string hero, string heroname)
{
    if (hero == "Warrior")
    {
        Hero *h = new Warrior(heroname, 1, 100, 20, 30, 10, 40, 10, 0);
        heroes.push_back(h);
        h->herois(1);
    }
    else if (hero == "Sorcerer")
    {
        Hero *h = new Sorcerer(heroname, 1, 100, 20, 10, 40, 30, 10, 0);
        heroes.push_back(h);
        h->herois(2);
    }
    else
    {
        Hero *h = new Paladin(heroname, 1, 100, 20, 40, 30, 10, 10, 0);
        heroes.push_back(h);
        h->herois(3);
    }
}

void HeroesTeam::display_heroes()
{
    cout << endl;
    for (int i = 0; i < heroes.size(); i++)
    {
        if (heroes[i]->get_object() == 1)
        {
            cout << "Warrior with name: " << heroes[i]->get_name() << " has:" << endl;
        }
        else if (heroes[i]->get_object() == 2)
        {
            cout << "Sorcerer with name: " << heroes[i]->get_name() << " has:" << endl;
        }
        else if (heroes[i]->get_object() == 3)
        {
            cout << "Paladin with name: " << heroes[i]->get_name() << " has:" << endl;
        }
        cout << "level: " << heroes[i]->get_level() << endl;
        cout << "healthPower: " << heroes[i]->get_healthPower() << endl;
        cout << "magicPower: " << heroes[i]->get_magicPower() << endl;
        cout << "strength: " << heroes[i]->get_strength() << endl;
        cout << "dexteriry: " << heroes[i]->get_dexterity() << endl;
        cout << "agility: " << heroes[i]->get_agility() << endl;
        cout << "money: " << heroes[i]->get_money() << endl;
        cout << "experience: " << heroes[i]->get_experience() << endl;
        cout << endl;
    }
}