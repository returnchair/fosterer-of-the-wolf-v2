/*
    Welcome to Fosterer of the Wolf source code!
    
    Contributions:
    *   ****, programmed classes  
    *   ****, programmed dialogue
    *   ****, programmed battle-related code
    *   ****, assembled the code and programmed ascii
    
    Please keep in mind, any modifcations may break the code if not modified correctly.
    For example, please make sure to look through header and all mentions of the before-modified code.
*/

#include <iostream>

#include "choices.hpp"    // dialogue
#include "classes.hpp"    // player class
#include "battle.hpp"     // battle sequence
#include "ascii.hpp"      // ascii art for dialogue improvements

using namespace std;

int main(){

    string chosenCharacter = "";
    string choice = "";
  
    cout << "\nYou wake up in the middle of the Yggdrasil tree. You're only open to two realms as far as you can see." << endl;
    cout << "\nYou see either: \n\nMidgard [Home of the World Serpent] \nHel [Home of the Guardian Hellhound]" << endl;
    cout << "\nPlease type in either Midgard or Hel to begin travel to either realms." << endl;

  cin >> choice;

if(choice == "Midgard" || choice == "midgard"){
        Thor one;
        chosenCharacter = "Thor";
        Jormungandr two;

        midgardAsciiIntro();

        SnakeIntro();
        initiateBattle(chosenCharacter, one.alive, one.attack, one.magicAttack, one.health, one.defense, one.speed, two.health, two.attack, two.heavyAttack, "Jormungandr");
        
    } else if(choice == "Hel" || choice == "hel") { // Hel
        Tyr one;
        chosenCharacter = "Tyr";
        Garm two;

        helAsciiIntro();

        GarmIntro();
        initiateBattle(chosenCharacter, one.alive, one.attack, one.magicAttack, one.health, one.defense, one.speed, two.health, two.attack, two.heavyAttack, "Garm");

    } else {
      cout << "Please re-read the dialogue given otherwise you may not be fit for this game!" << endl; // brain check lol
    }

// yes it's rigged against the boss

if(chosenCharacter == "Tyr"){
    TyrEnding();
    RollCredits();
    deathAndIntroAscii();
} else if (chosenCharacter == "Thor"){
    ThorEnding();
    RollCredits();
    deathAndIntroAscii();
}
}
