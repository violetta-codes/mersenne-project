#include "mersenne.h"
#include <cmath>
#include <iostream>
#include <algorithm>

// Check if a number is a Mersenne number
bool isMersenne(int num) {
    int p = 1;
    while ((1 << p) - 1 < num) p++;
    return (1 << p) - 1 == num;
}

// Check if a Mersenne number is prime
bool isMersennePrime(int num) {
    if (!isMersenne(num)) return false;
    for (int i = 2; i <= sqrt(num); ++i)
        if (num % i == 0) return false;
    return true;
}

// Get divisors of a number excluding 1 and itself
std::vector<int> getDivisors(int num) {
    std::vector<int> divisors;
    for (int i = 2; i <= num / 2; ++i)
        if (num % i == 0) divisors.push_back(i);
    return divisors;
}

// Get prime divisors of a number
std::vector<int> getPrimeDivisors(int num) {
    std::vector<int> divisors = getDivisors(num);
    std::vector<int> primeDivisors;
    for (int div : divisors) {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(div); ++i) {
            if (div % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) primeDivisors.push_back(div);
    }
    return primeDivisors;
}

// Get composite divisor difference between two numbers
std::vector<int> getCompositeDivisorDifference(int num1, int num2) {
    std::vector<int> div1 = getDivisors(num1);
    std::vector<int> div2 = getDivisors(num2);
    std::vector<int> difference;
    for (int div : div1) {
        if (std::find(div2.begin(), div2.end(), div) == div2.end()) {
            difference.push_back(div);
        }
    }
    return difference;
}

// Get Mersenne numbers in a range
std::vector<int> getMersenneNumbersInRange(int start, int end) {
    std::vector<int> result;
    for (int p = 2; (1 << p) - 1 <= end; ++p) {
        int mersenne = (1 << p) - 1;
        if (mersenne >= start) result.push_back(mersenne);
    }
    return result;
}

// Get first n Mersenne numbers
std::vector<int> getFirstNMersenneNumbers(int n) {
    std::vector<int> result;
    int p = 2;
    while (result.size() < n) {
        result.push_back((1 << p) - 1);
        p++;
    }
    return result;
}

// Get first n Mersenne primes
std::vector<int> getFirstNMersennePrimes(int n) {
    std::vector<int> result;
    int p = 2;
    while (result.size() < n) {
        int mersenne = (1 << p) - 1;
        if (isMersennePrime(mersenne)) result.push_back(mersenne);
        p++;
    }
    return result;
}

// Get Mersenne primes in a range
std::vector<int> getMersennePrimesInRange(int start, int end) {
    std::vector<int> result;
    for (int p = 2; (1 << p) - 1 <= end; ++p) {
        int mersenne = (1 << p) - 1;
        if (mersenne >= start && isMersennePrime(mersenne)) result.push_back(mersenne);
    }
    return result;
}

// Get first n perfect numbers
std::vector<int> getFirstNPerfectNumbers(int n) {
    std::vector<int> result;
    int p = 2;
    while (result.size() < n) {
        int mersenne = (1 << p) - 1;
        if (isMersennePrime(mersenne)) {
            result.push_back((1 << (p - 1)) * mersenne);
        }
        p++;
    }
    return result;
}
