/////////// Generates a wrong answer!!  ///////////////////

//#The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// #Find the sum of all the primes below two million.

//# This function finds the biggest factor of N.We will use this to identify a power of a single number or a prime number

//			# If prime number, factorize(N) == N

			
#include <iostream>
#include "utils.h"
using namespace std;

	// This function finds the biggest factor of N.We will use this to identify a power of a single number or a prime number



	int main() {
		// int maxim = pow(8, 0.5);
		// cout << "square root of 8 is rounded down to " << maxim << endl;
		long int naturalnumber = 2;
		long int primesum = 0;
		int maxprime = 2000000;

		while (naturalnumber < maxprime) {
			if (isprime(naturalnumber)) {
				primesum += naturalnumber;
			}
			naturalnumber++;
		}
		cout << "Sum of the prime numbers less than " << maxprime << " is " << primesum << endl;
		system("pause");
		return 0;
	}
	
//	Sum of the prime numbers less than 2000000 is 1179908154
//	Press any key to continue . . .
