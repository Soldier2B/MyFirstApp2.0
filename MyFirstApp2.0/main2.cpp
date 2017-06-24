

#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include "Player.hpp"

using namespace std;


//Forward Declarations

string getClass(string playerClass);

//Classes




//Main

int main () {

    string playerClass;
    playerClass = getClass (playerClass);

    Player player1;
    player1.setStartingStats(playerClass);

    exit (0);
}

/*
 Functions ==================================================
*/

//Intro


//Select class

string getClass (string playerClass) {

    int selectClass;

    do {

        cout << "Select what class you want to play.\n";
        cout << "{1} Mage {2} Warrior {3} More Info\n";
        cin >> selectClass;
        //if selectClass = 2 warrior
        //if selectClass = 1 mage
        if (selectClass == 1) {
            playerClass = "Mage";


        } else if (selectClass == 2) {
            playerClass = "Warrior";

        } else if (selectClass == 3) {
            cout << "Warriors are the best, pick them.\n";

        } else {
            cout << "** Select a valid option (1, 2 or 3) **\n";
        }
    } while (selectClass != 1 && selectClass != 2);

    cout << "Player selected " << playerClass << endl;

    return playerClass;

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
    //fight bigRobot

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











