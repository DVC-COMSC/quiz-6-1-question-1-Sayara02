#include "main.hpp"
using namespace std;

// Do not change this file.
// Use q1.hpp file to complete the functions
bool isPrime(int num) {
	if (num <= 1)
		return false;
	if(num == 2)
		return true;
	if (num % 2 == 0)
		return false;
	for (int i = 3; i <= sqrt(num); i +=2) {
		if (num % i == 0)
			return false;
	}
	return true;
}
int getPrevPrime(int end) {
	int prev = end - 1;
	while (!isPrime(prev)) {
		prev--;


	}
	return prev;
}
void getTwoValues(int &begin, int &end) {
	do {
	cout << "Enter two integer values (begin < end): ";
	
}
int getNextPrime(int begin){
	intnext = begin + 1;
	while (!isPrime(next)) {
		next++;
	}
	return next;
}
int hetPrevPrime(int end) {
	int prev = end -1;
	while (!isPrime(prev)) {
		prev--;
	}
	return prev;
}
int main()
{
	int begin, end;
	int prime1, prime2;

	getTwoValues(begin, end);
	prime1 = getNextPrime(begin);
	cout << "The prime number after " << begin << " is " << prime1 << endl;
	prime2 = getPrevPrime(end);
	cout << "The prime number before " << end << " is " << prime2 << endl;
}
