//
//  Common.cpp
//  MyFirstApp2.0
//
//  Created by Oliver Klein on 6/24/17.
//  Copyright © 2017 Oliver Klein. All rights reserved.
//

#include "Common.hpp"
#include <ctime>
#include <random>

using namespace std;

float getAccuracyRoll(float start, float end) {

unsigned int tiempo;

tiempo = (uint) time (NULL);

static mt19937 randomGenerator (tiempo);

uniform_real_distribution<float> attackRoll (start, end);


    float accuracyRoll;
    accuracyRoll = attackRoll(randomGenerator);

    return accuracyRoll;
    
}

uniform_int_distribution<int> diceRoll (1, 6);
