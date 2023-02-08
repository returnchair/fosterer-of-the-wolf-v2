#include <iostream>
#include <string>
#include "classes.hpp"
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <random>

using namespace std;

#include "classes.hpp"

// att is attack
// magicAtt is magical attacks
// health ais health
// speed determines the probability of how much they heal and when they heal (HPRegeneration function)
// defense substracts attack

Thor::Thor(bool alive1, double attack1, double magicAttack1, double health1, double defense1, double speed1){
    alive = alive1;
    attack = attack1;
    magicAttack = magicAttack1;
    health = health1;
    defense = defense1;
    speed = speed1;
}

Tyr::Tyr(bool alive1, double attack1, double magicAttack1, double health1, double defense1, double speed1){
    alive = alive1;
    attack = attack1;
    magicAttack = magicAttack1;
    health = health1;
    defense = defense1;
    speed = speed1;
}

Garm::Garm(bool alive1, double attack1, double heavyAttack1, double health1, double speed1){
    alive = alive1;
    attack = attack1;
    heavyAttack = heavyAttack1;
    health = health1;
    speed = speed1;
}

Jormungandr::Jormungandr(bool alive1, double attack1, double heavyAttack1, double health1, double speed1){
    alive = alive1;
    attack = attack1;
    heavyAttack = heavyAttack1;
    health = health1;
    speed = speed1;
}