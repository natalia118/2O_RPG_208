//
// Created by PC on 3/14/2024.
//

#ifndef INC_20_RPG_208_ENEMY_H
#define INC_20_RPG_208_ENEMY_H
#include "../character/character.h"
#include "../Player/Player.h"
#include "../Combat/Action.h"

struct Action;
class Player;

class Enemy: public Character {
public:
    Enemy(string, int, int, int, int);
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
    Character* getTarget(vector<Player*> teamMembers);
    Action takeAction(vector<Player*> player);
};

#endif //INC_20_RPG_208_ENEMY_H
