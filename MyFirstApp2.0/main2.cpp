

#include <iostream>
#include <string>
#include <random>
#include <ctime>


using namespace std;


//Forward Declarations

string getClass();

//Classes

class Player {
    
public:
    
    void setStartingStats (string playerClass) {
        
        if (playerClass == "Mage") {
            _playerHealth = 200;
            _playerDamage = 10;
            _playerMagicDmg = 50;
            _playerAccuracy = 0;
            _playerArmor = 0;
            _playerMagicDef = 0;
            
        }
        
        if (playerClass == "Warrior") {
            _playerHealth = 300;
            _playerDamage = 0;
            _playerMagicDmg = 0;
            _playerAccuracy = 0;
            _playerArmor = 0.0;
            _playerMagicDef = 0;
            
        }
        
    }
    
    int Attack () {
        int damageDealt = 0;
        return damageDealt;
    }
    int Defend () {
        int damageMitigation = 0;
        return damageMitigation;
        
    }
    int useExp () {
        int remainingExp = 0;
        return remainingExp;
    }
    
private:
    int _playerHealth;
    int _playerDamage;
    int _playerMagicDmg;
    float _playerAccuracy;
    int _playerArmor;
    int _playerMagicDef;
    
};


//Main

int main () {
    
    string playerClass;
    playerClass = getClass ();
    
    Player player1;
    player1.setStartingStats(playerClass);
    
    


    
    
    
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
    // programacion defensiva

    // chequeas q no esta en blanco

    // chequeo minimo

    // chequeas si es numerico
    // chequeas que ese numero sea positivo
    // else lo que queres q pase


//Game Over











