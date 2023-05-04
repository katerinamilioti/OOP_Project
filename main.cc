#include <iostream>
#include <vector>
#include <cstdio>
#include "Grid.h"

using namespace std;

int main()
{
    Grid *g = new Grid(4, 4);

    vector<string> wname;
    vector<double> wprice;
    vector<int> wlow_level;
    vector<int> wdamage;
    vector<int> whands;
    vector<string> aname;
    vector<double> aprice;
    vector<int> alow_level;
    vector<int> areducedamage;
    vector<string> pname;
    vector<double> pprice;
    vector<int> plow_level;
    vector<int> pincrease;

    wname.push_back("Caladbolg");
    wprice.push_back(10.0);
    wlow_level.push_back(2);
    wdamage.push_back(5);
    whands.push_back(2);
    aname.push_back("Emblem");
    aprice.push_back(5.0);
    alow_level.push_back(0);
    areducedamage.push_back(2);
    pname.push_back("X-Potion");
    pprice.push_back(7.5);
    plow_level.push_back(1);
    pincrease.push_back(8);
    g->create_weapons(wname, wprice, wlow_level, wdamage, whands);
    g->create_armors(aname, aprice, alow_level, areducedamage);
    g->create_potions(pname, pprice, plow_level, pincrease);

    g->create_heroesteam();

    vector<string> heroname;
    heroname.push_back("Arvoreen");
    heroname.push_back("Ehlonna");
    heroname.push_back("Heironeous");

    string hero;
    cout << "How many heroes do you want?You can have maximum 3" << endl;
    int count;
    cin >> count;
    if (count == 1)
    {
        cout << "Do you want Warrior or Sorcerer or Paladin?" << endl;
        do
        {
            cin >> hero;
            if ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"))
            {
                cout << "There is no hero with name " << hero << " try again!" << endl;
            }
        } while ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"));
        g->create_heroes(hero, heroname[0]);
    }
    else if (count == 2)
    {
        cout << "Do you want Warrior or Sorcerer or Paladin?" << endl;
        do
        {
            cin >> hero;
            if ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"))
            {
                cout << "There is no hero with name " << hero << " try again!" << endl;
            }
        } while ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"));
        g->create_heroes(hero, heroname[0]);
        cout << "Do you want Warrior or Sorcerer or Paladin?" << endl;
        do
        {
            cin >> hero;
            if ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"))
            {
                cout << "There is no hero with name " << hero << " try again!" << endl;
            }
        } while ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"));
        g->create_heroes(hero, heroname[1]);
    }
    else if (count == 3)
    {
        cout << "Do you want Warrior or Sorcerer or Paladin?" << endl;
        do
        {
            cin >> hero;
            if ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"))
            {
                cout << "There is no hero with name " << hero << " try again!" << endl;
            }
        } while ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"));
        g->create_heroes(hero, heroname[0]);
        cout << "Do you want Warrior or Sorcerer or Paladin?" << endl;
        do
        {
            cin >> hero;
            if ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"))
            {
                cout << "There is no hero with name " << hero << " try again!" << endl;
            }
        } while ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"));
        g->create_heroes(hero, heroname[1]);
        cout << "Do you want Warrior or Sorcerer or Paladin?" << endl;
        do
        {
            cin >> hero;
            if ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"))
            {
                cout << "There is no hero with name " << hero << " try again!" << endl;
            }
        } while ((hero != "Warrior") && (hero != "Sorcerer") && (hero != "Paladin"));
        g->create_heroes(hero, heroname[2]);
    }
    else
    {
        cout << "You cannot create so many heroes" << endl;
    }

    cout << "Your hero team is in a square with market" << endl;

    cout << "\nIn the game if you want to move your heroes press these button:" << endl;
    cout << "     W : up" << endl;
    cout << "     S : down" << endl;
    cout << "     A : left" << endl;
    cout << "     D : right" << endl;
    cout << "if you want to display the map press button P" << endl;
    char ch = 0;

    cout << "Press Q to quit\n";

    do
    {
        ch = getchar();

        switch (ch)
        {
        case 'W':
        case 'w':
            g->moveup();
            cin.sync();
            break;
        case 'A':
        case 'a':
            g->moveleft();
            cin.sync();
            break;
        case 'S':
        case 's':
            g->movedown();
            cin.sync();
            break;
        case 'D':
        case 'd':
            g->moveright();
            cin.sync();
            break;
        case 'P':
        case 'p':
            g->displayMaP();
        }
    } while (ch != 'Q' && ch != 'q');
}
