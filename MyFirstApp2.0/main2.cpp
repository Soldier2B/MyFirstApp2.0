

#include <iostream>
#include <string>
#include <random>
#include <ctime>


using namespace std;


//Forward Declarations

string getClass(string playerClass);

//Classes

class Player {
    
public:

// player starting stats setter
    
    void setStartingStats (string playerClass) {
        
        if (playerClass == "Mage") {
            _playerHealth = 200;
            _playerDamage = 10;
            _playerMagicDmg = 50;
            _playerAccuracy = 0.0;
            _playerArmor = 0;
            _playerMagicDef = 0;
            _playerSpeed = 0.0;
            
            cout << "Stats set to " << playerClass << " class.\n";
            
        }
        
        if (playerClass == "Warrior") {
            _playerHealth = 300;
            _playerDamage = 0;
            _playerMagicDmg = 0;
            _playerAccuracy = 0;
            _playerArmor = 0.0;
            _playerMagicDef = 0;
            _playerSpeed = 0.0;
            
            cout << "Stats set to " << playerClass << " class.\n";

            
        }
        
    }
    
// In-Game stat setters
    
    void setPlayerHealth (int playerHealth) {
        _playerHealth = playerHealth;
    }
    
    void setPlayerDamage (int playerDamage) {
        _playerDamage = playerDamage;
    }
    
    void setPlayerMagicDmg (int playerMagicDmg) {
        _playerMagicDmg = playerMagicDmg;
    }
    
    void setPlayerAccuracy (int playerAccuracy) {
        _playerAccuracy = playerAccuracy;
    }
    
    void setPlayerArmor (int playerArmor) {
        _playerArmor = playerArmor;
    }
    
    void setPlayerMagicDef (int playerMagicDef) {
        _playerMagicDef = playerMagicDef;
    }
    
    void setPlayerSpeed (int playerSpeed) {
        _playerSpeed = playerSpeed;
    }
    

//In-Game getters
    
// player speed / initiative
    
    int getPlayerSpeed(){
        return _playerSpeed;
        
    }
// player attack
    int getPlayerAttack () {
        int damageDealt = 0;
        return damageDealt;
    }
    int getPlayerMagicAttack () {
        int magicDmgDealt = 0;
        return magicDmgDealt;
    }
    
// player defence
    
    int getPlayerDefence () {
        int damageMitigation = 0;
        return damageMitigation;
        
    }
    int getPlayerMagicDef () {
        int magicDmgMitigation = 0;
        return magicDmgMitigation;
    }
    
    
// player stats
    
private:
    int _playerHealth;
    int _playerDamage;
    int _playerMagicDmg;
    float _playerAccuracy;
    int _playerArmor;
    int _playerMagicDef;
    float _playerSpeed;
    
};


//Main

int main () {
    
    string playerClass = "unselected";
    playerClass = getClass (playerClass);
    
    Player player1;
    player1.setStartingStats(playerClass);
    
    
    


    
    
    
    exit (0);
}



//Functions

//Intro


//Select class

string getClass (string playerClass) {
    
    int selectClass;
    
    while (playerClass == "unselected") {
    
        cout << "Select what class you want to play.\n";
        cout << "{1} Mage  {2} Warrior {3} More Info\n";
        cin >> selectClass;
    
        //if selectClass = 1 mage
        if (selectClass == 1) {
            playerClass = "Mage";
        }
    
        //if selectClass = 2 warrior
    
        if (selectClass == 2){
            playerClass = "Warrior";
        }
    
        if (selectClass == 3) {
            cout << "Warriors are the best, pick them.\n";
        }
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











