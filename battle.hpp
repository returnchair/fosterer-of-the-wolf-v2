#pragma once

using namespace std;

void initiateBattle(string player, bool alive, double attack, double specialAttack, double health, double defense, double speed, double enemyHealth, double enemyAttack, double enemyHeavyAttack, string enemyName);

double attackSequence(double attack, double specialAttack);

double enemyAttackSequence(double attack, double heavyAttack);

void magicalPotions(double specialAttack); 

bool updateHealth(double inflictedAttack, double enemyAttack, double enemyHeavyAttack, string enemyType);

void poisonTask(double specialAttack);