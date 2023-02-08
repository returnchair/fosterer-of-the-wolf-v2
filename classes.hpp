#pragma once

using namespace std;

class Thor{
    public:

    bool player;
    double attack, magicAttack, health, speed, defense;
    bool alive;
    string name = "Thor";
   
    Thor(bool alive1 = true, double attack1 = 5650, double magicAttack1 = 2, double health1 = 6500, double defense1 = 1.1, double speed1 = 10);

    // bool updatehealth(double heal, double att);
};

class Tyr{
    public:

    bool player;
    double attack, magicAttack, health, speed, defense;
    bool alive;
    string name = "Tyr";

    Tyr(bool alive1 = true, double attack = 5350, double magicAttack1 = 5, double health1 = 2500, double defense1 = 1.2, double speed1 = 10);
};

// enemies

class Garm{
    public:

    double attack, heavyAttack, health, speed;
    bool alive;
    string name = "Garm";

    Garm(bool alive1 = true, double attack1 = 250, double heavyAttack1 = 400, double health1 = 50000, double speed1 = 10);
};

class Jormungandr{
    public:

    double attack, heavyAttack, health, speed;
    bool alive;
    string name = "Jormungandr";

    Jormungandr(bool alive1 = true, double attac1k = 300, double heavyAttack1 = 400, double health1 = 50000, double speed1 = 10);
};


