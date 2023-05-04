#include <iostream>
#include <vector>
#include "Grid.h"

using namespace std;

Grid::Grid(int a, int b)
{
    this->a = a;
    this->b = b;
    for (int i = 0; i < this->a; i++)
    {
        vector<Square *> v1;
        for (int j = 0; j < this->b; j++)
        {
            if (i == j)
            { // main diagonal
                Square *s = new SquarewithMarket();
                v1.push_back(s);
                s->setheroesteam(0); // heroes team is not inside the square
            }
            else if (i < j)
            { // above the main diagonal
                Square *s = new Common();
                v1.push_back(s);
                s->setheroesteam(0);
            }
            else
            { // under the main diagonal
                Square *s = new NonAccessible();
                v1.push_back(s);
                s->setheroesteam(0);
            }
        }
        square.push_back(v1);
    }
    cout << "Grid has been created!" << endl;
}

int Grid::geta()
{
    return this->a;
}

int Grid::getb()
{
    return this->b;
}

void Grid::seti()
{
    this->i = 0;
}

void Grid::setj()
{
    this->j = 0;
}

int Grid::geti()
{
    return this->i;
}

int Grid::getj()
{
    return this->j;
}

int Grid::moveidown()
{
    if ((this->i + 1) < geta())
    { // outside grid's borders
        if ((square[i + 1][j]->get_s() != 3))
        {
            this->i++; // while i is increased heroes' team is moving downwards
            return 1;
        }
        else
        {
            cout << "You cannot do this move try again!" << endl; // heroes cannot access nonAccessible square
            return 0;
        }
    }
    else
    {
        cout << "You cannot do  this move try again!" << endl;
        return 0;
    }
}

int Grid::moveiup()
{
    if (((this->i - 1) >= 0))
    {
        if ((square[i - 1][j]->get_s() != 3))
        {
            this->i--; // while i is decreased heroes' team is moving upwards
            return 1;
        }
        else
        {
            cout << "You cannot do  this move try again!" << endl;
            return 0;
        }
    }
    else
    {
        cout << "You cannot do this move try again!" << endl;
        return 0;
    }
}

int Grid::movejleft()
{
    if ((this->j - 1) >= 0)
    {
        if ((square[i][j - 1]->get_s() != 3))
        {
            this->j--; // while j is decreased heroes' team is moving towards left
            return 1;
        }
        else
        {
            cout << "You cannot do this move try again!" << endl;
            return 0;
        }
    }
    else
    {
        cout << "You cannot do this move try again!" << endl;
        return 0;
    }
}

int Grid::movejright()
{
    if ((this->j + 1) < getb())
    {
        if ((square[i][j + 1]->get_s() != 3))
        {
            this->j++; // while j is increased heroes' team is moving towards right
            return 1;
        }
        else
        {
            cout << "YoU cannot do this try again!" << endl;
            return 0;
        }
    }
    else
    {
        cout << "YoU cannot do this move try again!" << endl;
        return 0;
    }
}

void Grid::create_weapons(vector<string> name, vector<double> price, vector<int> low_level, vector<int> damage, vector<int> hands)
{
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->get_s() == 1)
            { // when get_s() == 1 this square is market
                square[i][j]->create_weapons(name, price, low_level, damage, hands);
            }
        }
    }
}

void Grid::create_armors(vector<string> name, vector<double> price, vector<int> low_level, vector<int> reducedamage)
{
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->get_s() == 1)
            {
                square[i][j]->create_armors(name, price, low_level, reducedamage);
            }
        }
    }
}

void Grid::create_potions(vector<string> name, vector<double> price, vector<int> low_level, vector<int> increase)
{
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->get_s() == 1)
            {
                square[i][j]->create_potions(name, price, low_level, increase);
            }
        }
    }
}

void Grid::create_icespells(vector<string> name, vector<double> price, vector<int> low_level, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->get_s() == 1)
            {
                square[i][j]->create_icespells(name, price, low_level, lowdamage, highdamage, magicpower);
            }
        }
    }
}
void Grid::create_firespells(vector<string> name, vector<double> price, vector<int> low_level, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->get_s() == 1)
            {
                square[i][j]->create_firespells(name, price, low_level, lowdamage, highdamage, magicpower);
            }
        }
    }
}

void Grid::create_lightingspells(vector<string> name, vector<double> price, vector<int> low_level, vector<int> lowdamage, vector<int> highdamage, vector<int> magicpower)
{
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->get_s() == 1)
            {
                square[i][j]->create_lightingspells(name, price, low_level, lowdamage, highdamage, magicpower);
            }
        }
    }
}

void Grid::create_heroesteam()
{
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->get_s() == 1)
            { // at first heroes' team is created inside the first market
                square[i][j]->create_heroesteam();
                square[geti()][getj()]->setheroesteam(1); // heroes are inside this square
                break;
            }
        }
        break;
    }
}

void Grid::create_heroes(string hero, string heroname)
{
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->get_s() == 1)
            {
                square[i][j]->create_heroes(hero, heroname);
                break;
            }
        }
        break;
    }
}

void Grid::display_heroes()
{
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->getheroesteam() == 1)
            { // heroes are displayed inside the square that they are located at
                square[i][j]->display_heroes();
            }
        }
    }
}

void Grid::moveup()
{
    if ((moveiup()) != 0)
    {
        square[geti()][getj()]->setheroesteam(1);
        if (square[geti()][getj()]->get_s() == 1)
        {
            cout << "Your heroes is in a sqaure with Market!" << endl;
        }
        else if (square[geti()][getj()]->get_s() == 2)
        {
            cout << "Your heroes is in a Common square!" << endl;
        }
        for (int i = 0; i < square.size(); i++)
        {
            for (int j = 0; j < square[i].size(); j++)
            {
                if (i != geti() && j != geti())
                {
                    square[geti()][getj()]->setheroesteam(0); // showing in what squares the heroes are not located
                }
            }
        }
    }
}

void Grid::movedown()
{
    if (moveidown() != 0)
    {
        square[geti()][getj()]->setheroesteam(1);
        if (square[geti()][getj()]->get_s() == 1)
        {
            cout << "Your heroes is in a sqaure with Market!" << endl;
        }
        else if (square[geti()][getj()]->get_s() == 2)
        {
            cout << "Your heroes is in a Common square!" << endl;
        }
        for (int i = 0; i < square.size(); i++)
        {
            for (int j = 0; j < square[i].size(); j++)
            {
                if (i != geti() && j != geti())
                {
                    square[geti()][getj()]->setheroesteam(0);
                }
            }
        }
    }
}

void Grid::moveright()
{
    if (movejright() != 0)
    {
        square[geti()][getj()]->setheroesteam(1);
        if (square[geti()][getj()]->get_s() == 1)
        {
            cout << "Your heroes is in a sqaure with Market!" << endl;
        }
        else if (square[geti()][getj()]->get_s() == 2)
        {
            cout << "Your heroes is in a Common square!" << endl;
        }
        for (int i = 0; i < square.size(); i++)
        {
            for (int j = 0; j < square[i].size(); j++)
            {
                if (i != geti() && j != geti())
                {
                    square[geti()][getj()]->setheroesteam(0);
                }
            }
        }
    }
}

void Grid::moveleft()
{
    if (movejleft() != 0)
    {
        square[geti()][getj()]->setheroesteam(1);
        if (square[geti()][getj()]->get_s() == 1)
        {
            cout << "Your heroes is in a sqaure with Market!" << endl;
        }
        else if (square[geti()][getj()]->get_s() == 2)
        {
            cout << "Your heroes is in a Common square!" << endl;
        }
        for (int i = 0; i < square.size(); i++)
        {
            for (int j = 0; j < square[i].size(); j++)
            {
                if (i != geti() && j != geti())
                {
                    square[geti()][getj()]->setheroesteam(0);
                }
            }
        }
    }
}

void Grid::displayMaP()
{
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->get_s() == 1)
            {
                cout << "These square has Market" << endl;
                if (square[i][j]->getheroesteam() == 1)
                { // checking whether the heroes are inside a market square
                    cout << " and hero team is in this sqaure" << endl;
                }
                else
                {
                    cout << " and hero team is not in this sqaure" << endl;
                }
            }
            else if (square[i][j]->get_s() == 3)
            {
                cout << "These square is nonAccessible and heroes is not in this square" << endl;
            }
        }
    }
}

void Grid::displayMarket()
{ // displaying the Market with usables' info
    for (int i = 0; i < square.size(); i++)
    {
        for (int j = 0; j < square[i].size(); j++)
        {
            if (square[i][j]->get_s() == 1)
            {
                square[i][j]->display_Market();
            }
        }
    }
}
