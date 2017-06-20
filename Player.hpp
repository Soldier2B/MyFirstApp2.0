
#ifndef Player_hpp
#define Player_hpp
#include <string>

using namespace std;

class Player {
    
    int _playerHealth;
    int _playerDamage;
    int _playerMagicDmg;
    float _playerAccuracy;
    int _playerArmor;
    int _playerMagicDef;
    float _playerSpeed;
    
public:
    Player();
    void setStartingStats (string playerClass);
    
    
};




    


    


#endif /* Player_hpp */
