
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
    for (int i = 3; i <= sqrt(num); i += 2){
        if (num % i == 0)
            return false;
    }
    return true;

}
void getTwoValues(int &begin, int &end) {
    do {
        std::cout << "Enter two imteger values (begin < end): ";
        std::cin >> begin >> end;
    }while (begin >= end);
}
int getNextPrime(int begin) {
    int next = begin + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}
int getPrevPrime(int end) {
    int prev = end - 1;
    while (!isPrime(prev)) {
        prev--;
    }
    return prev;
}
#endif
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************
