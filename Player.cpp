
#include "Player.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
#include "Common.hpp"

using namespace std;

Player::Player() {
    
};
    
    // player starting stats setter
    
void Player::setStartingStats (string playerClass) {
        
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

int Player::getDmgDealt () {
    
    int damageDealt = 0;
    float accuracy;
    accuracy = getAccuracyRoll (0.0f, 5.0f);
    
    cout << accuracy;
 
    if (accuracy > _playerAccuracy) {
        damageDealt = _playerDamage;
        return damageDealt;
    } else {
        return damageDealt;
        }
    
}




/*
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



*/




















