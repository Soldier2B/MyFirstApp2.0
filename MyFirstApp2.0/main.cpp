
// First game attempt, 1d humans vs Skelletons

#include <iostream>
#include <string>
#include <random>
#include <ctime>


using namespace std;

int main()
{
    //variables and other things needed
    
    int skelletons;
    int humans;
    
    //random number things
    mt19937 randomGenerator (time_t (0));
    uniform_int_distribution<int> diceRoll (1, 6);
    uniform_real_distribution<float> attackRoll (0.0f, 1.0f);
    
    cout << "interface\n";
    //interface
    //intro
    //define number of skelly and humans
    
    cout << "Hello, welcome to humans vs skelletons.\n";
    cout << "Please select the number of humans.\n";
    cin >> humans;
    cout << "Now, select the number of skelletons they will fight against.\n";
    cin >> skelletons;
    
    cout << humans <<" humans will fight against " << skelletons << " skelletons.\n";
    cout << "Let the battle start!!!\n";
    
    
    //battle program
    //human fights skelleton
    
    //stats
    
    int humanHealth = 250;
    int humanDmg = 80;
    int humanArmor = 20;
    float humanMissRate = 0.1f;
    
    int skelletonHealth = 100;
    int skelletonDmg = 50;
    int skelletonArmor = 2;
    float skelletonMissRate = 0.2f ;
    
    int round = 1;
    
    cout << "battle start\n";
    while (humans  >= 1 && skelletons >= 1) {    //loop till one team has 0 left
        
        
        //turn based fight
        
        while (humanHealth > 0 && skelletonHealth > 0) {    //loop till winner
            
            //iniciative roll
            int initiative = 1;
            float attack = 1.0f;
            
            cout << "Round " << round << " start!\n";
            
            initiative = diceRoll (randomGenerator);
            
            //attack roll vs health roll //all attack rolls check if you hit or miss the target
            
            if (initiative <= 3) {                //human attack if he won iniciative
                attack = attackRoll (randomGenerator);
                cout << "attack " << attack <<endl;
                cout << "human won first roll\n";
                if (attack > humanMissRate)   {
                    skelletonHealth = skelletonHealth - humanDmg;
                    cout << "human hits skelleton\n";
                    cout << "skelletonHealth " << skelletonHealth <<endl;
                }
                
                if (skelletonHealth > 0) {      //if alive, skelleton attack if he lost iniciative
                    attack = attackRoll (randomGenerator);
                    cout << "skelleton is still alive\n";
                    if (attack > skelletonMissRate)  {
                        humanHealth = humanHealth - skelletonDmg;
                        cout << "skelleton hits human\n";
                        
                    }
                    
                }
                
            } else {                            //skelleton attack if he won iniciative
                attack = attackRoll (randomGenerator);
                cout << "skelleton won first roll\n";
                if (attack > skelletonMissRate)  {
                    humanHealth = humanHealth - skelletonDmg;
                    cout << "skelleton hits human\n";
                }
                if (humanHealth > 0) {          //if alive, human attack if he lost iniciative
                    attack = attackRoll (randomGenerator);
                    cout << "human is still alive\n";
                    if (attack > humanMissRate)   {
                        skelletonHealth = skelletonHealth - humanDmg;
                        cout << "human hits skelleton\n";
                    }
                    
                }
                
                cout << "humanHealth " << humanHealth << "skelletonHealth " << skelletonHealth << endl;
            }
            
            //check for casualty and substract from total
            
            if (humanHealth <= 0) {
                humans--;
                if (humans > 0) {
                    humanHealth = 500;
                }
            }
            if (skelletonHealth <= 0){
                skelletons--;
                if (skelletons > 0) {
                skelletonHealth = 150;
                }

            }
            round ++;
            cout << "there are " << humans << " humans and " << skelletons << " skelletons remaining.\n";
        }
    }
    
    //game over
    
    cout << "Battle is over!\n";
    
    //outro
    //print results
    
    
    if (humans > 0) {
        cout << "Humans have won!\n";
    } else {
        cout << "Skelletons have won!\n";
        
    }
    
    return 0;
    
}

//end

