
#ifndef MAIN_HPP
#define MAIN_HPP
#include <iostream>
#include <cmath>
bool isPrime(int num) {
    if (num <=1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (imt i = 3; i <= sqrt(num); i += 2){
        if (num % i == 0)
            return false;
    }
    return true;

}
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************
