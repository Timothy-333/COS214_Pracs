#ifndef LAIR_H
#define LAIR_H

#include <iostream>
#include <string>
#include "Traps.h"
#include "hero.h"

using namespace std;

class lair {
public:
    lair();
    void displayBoard();
    void createTile(int, int);
    void removeTile(int, int);
    void AddTrap(int x, int y, string Type, int Damage, int Cost);
    int checkTilesConnection(int, int);
    void displayTile(int, int);
    void AddTreasure(int, int);
    void DFTraversal(int, int, Hero);
    void BFTraversal(int, int, Hero);
private:
    bool gameFinished;
    Traps *board[10][10];
    bool treasureAdded;
};

#endif  // LAIR_H