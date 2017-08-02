

#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include "Player.hpp"

using namespace std;


//Forward Declarations

string GetClass(string playerClass);

//Classes




//Main

int main () {
    
    string playerClass;
    playerClass = GetClass (playerClass);

    Player player1;
    player1.setStartingStats(playerClass);
    
    player1.getDmgDealt();

    exit (0);
}

/*
 Functions ==================================================
*/

//Intro


//Select class

string GetClass (string player_class) {

    int select_class;

    do {

        cout << "Select what class you want to play.\n";
        cout << "{1} Mage {2} Warrior {3} More Info\n";
        cin >> select_class;
        //if selectClass = 2 warrior
        //if selectClass = 1 mage
        if (select_class == 1) {
            player_class = "Mage";


        } else if (select_class == 2) {
            player_class = "Warrior";

        } else if (select_class == 3) {
            cout << "Warriors are the best, pick them.\n";

        } else {
            cout << "** Select a valid option (1, 2 or 3) **\n";
        }
    } while (select_class != 1 && select_class != 2);

    cout << "Player selected " << player_class << endl;

    return player_class;

}


//Actions Menu

//void getOptions () {
//    cout <<
//    cin >>
    
    // if move
    // if exp
    // if stats
    

        
//}

    //Move

    //Battle

    //Use Exp

    //Check your stats



//Movement Options



//Exp Options

// player exp managment

/*  int useExp () {
 int unusedExp = 0;
 return unusedExp;
 } */


//Class types

    //mage

    //warrior


//Enemy Types

    //fight robot
    //fight big_robot

//Battle actions

    //Attack
    //Defend


//Input Validation
    // programacion defensiva

    // chequeas q no esta en blanco

    // chequeo minimo

    // chequeas si es numerico
    // chequeas que ese numero sea positivo
    // else lo que queres q pase


//Game Over











