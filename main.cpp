#include <iostream>
#include "mersenne.h"

int main() {
    // пример 1 : Функция, която проверява дали едно число е число на Мерсен. 
    std::cout << "127 is " << (isMersenne(127) ? "" : "not ") << "a Mersenne number.\n";

    // пример 2 : Функция, която проверява дали едно число на Мерсен е просто.
    std::cout << "127 is " << (isMersennePrime(127) ? "" : "not ") << "a Mersenne prime.\n";

    // пример 3 : Функция, която показва всички делители на дадено число, с изключение на единицата и самото число. 
    std::cout << "Divisors of 28: ";
    for (int d : getDivisors(28)) std::cout << d << " ";
    std::cout << "\n";

    // пример 4: Функция, която записва в масив всички прости делители на едно число
    std::cout << "Prime divisors of 28: ";
    for (int d : getPrimeDivisors(28)) std::cout << d << " ";
    std::cout << "\n";

    // пример 5 : Функция, която записва в масив разликата на множествата от съставни делители на две числа.
    std::cout << "Composite divisor difference (28, 30): ";
    for (int d : getCompositeDivisorDifference(28, 30)) std::cout << d << " ";
    std::cout << "\n";

    // пример 6 :  Функция, която показва всички мерсенови числа в даден интервал. 
    std::cout << "Mersenne numbers in range [1, 1000]: ";
    for (int m : getMersenneNumbersInRange(1, 1000)) std::cout << m << " ";
    std::cout << "\n";

    // пример 7 : Функция, която показва първите n на брой мерсенови числа. 
    std::cout << "First 5 Mersenne numbers: ";
    for (int m : getFirstNMersenneNumbers(5)) std::cout << m << " ";
    std::cout << "\n";

    // пример 8 : Функция, която показва първите n на брой мерсенови прости числа. 
    std::cout << "First 5 Mersenne primes: ";
    for (int m : getFirstNMersennePrimes(5)) std::cout << m << " ";
    std::cout << "\n";

    // пример 9 : Функция, която запазва в масив всички намерени мерсенови прости числа в даден интервал. 
    std::cout << "Mersenne primes in range [1, 1000]: ";
    for (int m : getMersennePrimesInRange(1, 1000)) std::cout << m << " ";
    std::cout << "\n";

    // пример 10: Функция, която запазва в масив първите n на брой мерсенови числа, които са перфектни
    std::cout << "First 3 perfect numbers: ";
    for (int p : getFirstNPerfectNumbers(3)) std::cout << p << " ";
    std::cout << "\n";

    return 0;
}
