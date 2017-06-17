
// First game attempt, 1d humans vs Skeletons

#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

// Forward Declarations

int getHumans();
int getSkeletons();
void battle(int humans, int skeletons);
void printResults(int humans, int skeletons);


int main()
{
    //variables and other things needed
    
    int skeletons;
    int humans;
    
    //interface
    
    cout << "interface\n";
    
    //intro
    //define number of skely and humans
    
    cout << "Hello, welcome to humans vs skeletons.\n";
    
    humans = getHumans();

    skeletons = getSkeletons();

    cout << humans <<" humans will fight against " << skeletons << " skeletons.\n";
    cout << "Let the battle start!!!\n";
    
    //battle
    
    battle(humans, skeletons);
    
    cout << "Wave 2?\n" << "How many more skeletons do they fight?\n";
    cin >> skeletons;
    
    battle(humans, skeletons);

    //outro
    
    printResults (humans, skeletons);
  
    
    exit (0);
    
}

//Functions

int getHumans() {
    int humans;
    cout << "Please select the number of humans.\n";
    cin >> humans;
    return humans;
}


int getSkeletons() {
    int skeletons;
    cout << "Now, select the number of skeletons they will fight against.\n";
    cin >> skeletons;
    return skeletons;
}

void battle(int humans, int skeletons) {
    //battle program
    //human fights skeleton
    
    //random number things
    
    unsigned int tiempo;
    
    tiempo = (unsigned int) time (NULL);
    
    static mt19937 randomGenerator (tiempo);
    uniform_int_distribution<int> diceRoll (1, 6);
    uniform_real_distribution<float> attackRoll (0.0f, 1.0f);
    
    
    //stats
    
    int humanHealth = 250;
    int humanDmg = 80;
    int humanArmor = 20;
    float humanMissRate = 0.1f;
    
    int skeletonHealth = 100;
    int skeletonDmg = 50;
    int skeletonArmor = 2;
    float skeletonMissRate = 0.2f ;
    
    int round = 1;
    
    cout << "battle start\n";
    
    
    while (humans  >= 1 && skeletons >= 1) {    //loop till one team has 0 left
        
        //turn based fight
        
        while (humanHealth > 0 && skeletonHealth > 0) {    //loop till winner
            
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
                    skeletonHealth = skeletonHealth - humanDmg;
                    cout << "human hits skeleton\n";
                    cout << "skeletonHealth " << skeletonHealth <<endl;
                }
                
                if (skeletonHealth > 0) {      //if alive, skeleton attack if he lost iniciative
                    attack = attackRoll (randomGenerator);
                    cout << "skeleton is still alive\n";
                    if (attack > skeletonMissRate)  {
                        humanHealth = humanHealth - skeletonDmg;
                        cout << "skeleton hits human\n";
                        
                    }
                    
                }
                
            } else {                            //skeleton attack if he won iniciative
                attack = attackRoll (randomGenerator);
                cout << "skeleton won first roll\n";
                if (attack > skeletonMissRate)  {
                    humanHealth = humanHealth - skeletonDmg;
                    cout << "skeleton hits human\n";
                }
                if (humanHealth > 0) {          //if alive, human attack if he lost iniciative
                    attack = attackRoll (randomGenerator);
                    cout << "human is still alive\n";
                    if (attack > humanMissRate)   {
                        skeletonHealth = skeletonHealth - humanDmg;
                        cout << "human hits skeleton\n";
                    }
                    
                }
                
                cout << "humanHealth " << humanHealth << " skeletonHealth " << skeletonHealth << endl;
            }
            
            //check for casualty and substract from total
            
            if (humanHealth <= 0) {
                humans--;
                if (humans > 0) {
                    humanHealth = 500;
                }
            }
            if (skeletonHealth <= 0){
                skeletons--;
                if (skeletons > 0) {
                    skeletonHealth = 150;
                }
                
            }
            round ++;
            cout << "there are " << humans << " humans and " << skeletons << " skeletons remaining.\n";
        }
    }
    
    //game over
    
    cout << "Battle is over!\n";
}

void printResults(int humans, int skeletons) {
    
    //print results
    
    if (humans > 0) {
        cout << "Humans have won!\n";
    } else {
        cout << "Skeletons have won!\n";
        
    }
    
    
}

//end

