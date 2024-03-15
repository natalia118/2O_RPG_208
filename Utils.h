//
// Created by PC on 3/14/2024.
//

#ifndef INC_20_RPG_208_UTILS_H
#define INC_20_RPG_208_UTILS_H
#include <cstdlib>

namespace combat_utils {
    int getRolledAttack(int attack) {
        srand(time(NULL));
        int lowerLimit = attack * .80;
        return (rand() % (attack - lowerLimit)) + lowerLimit;
    }
}

#endif //INC_20_RPG_208_UTILS_H
