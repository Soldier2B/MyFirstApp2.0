
// diagramar programa

// name or something something
// select character or something

// funcion validar

// programacion defensiva
// input validation

// chequeas q no esta en blanco

// chequeo minimo

// chequeas si es numerico
// chequeas que ese numero sea positivo
// else lo que queres q pase

// ideas para pelea
// elegir spell o attack, a partir de una lista y usar numeros de referencia


//funciones

//intro
//selec race
//validation
//start adventure
//what to do
//validation
//encounter
//battle
//battle - select attack
//validation
//battle - select defense
//validation
//get exp
//what to do
//game ends

//what to do - use exp, move, otros



#include <iostream>
#include <string>
#include <random>
#include <ctime>


using namespace std;


//Forward Declarations

string getClass();

//Main

int main () {
    
    string playerClass;
    playerClass = getClass ();

    
    
    
    exit (0);
}



//Functions

//Intro


//Select class

string getClass () {
    
    int selectClass;
    string playerClass;
    
    cout << "Select what class you want to play.\n";
    cout << "{1} Mage  {2} Warrior \n";
    cin >> selectClass;
    
    //if selectClass = 1 mage
    if (selectClass == 1) {
        playerClass = "Mage";
    }
    
    //if selectClass = 2 warrior
    
    if (selectClass == 2){
        playerClass = "Warrior";
    }
    
    cout << "Player selected " << playerClass << endl;
    
    return playerClass;
    
}

//Set starting stats

/* int getplayerStats (string playerClass) {
    
    int playerHealth;
    int playerDamage;
    int playerMagicDmg;
    int playerAccuracy;
    int playerArmor;
    int playerMagicDef;

    if (playerClass == "Mage") {
        playerHealth = 200;
        playerDamage = 10;
        playerMagicDmg = 50;
        playerAccuracy =
        playerArmor =
        playerMagicDef =
        
    }
    
    if (playerClass == "Warrior") {
        playerHealth =
        playerDamage =
        playerMagicDmg =
        playerAccuracy =
        playerArmor =
        playerMagicDef =
        
    }
    
    return playerHealth, playerDamage, playerMagicDmg, playerAccuracy, playerArmor, playerMagicDef;
    
}

*/

//int getClassStats () {
    
    
//    return health, damage, magicDmg, accuracy, armor, magicDefence;
    
//}

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


//Game Over











