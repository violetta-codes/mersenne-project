#ifndef MERSENNE_H
#define MERSENNE_H

#include <vector>
#include <set>

// Всички функции
bool isMersenne(int num);
bool isMersennePrime(int num);
std::vector<int> getDivisors(int num);
std::vector<int> getPrimeDivisors(int num);
std::vector<int> getCompositeDivisorDifference(int num1, int num2);
std::vector<int> getMersenneNumbersInRange(int start, int end);
std::vector<int> getFirstNMersenneNumbers(int n);
std::vector<int> getFirstNMersennePrimes(int n);
std::vector<int> getMersennePrimesInRange(int start, int end);
std::vector<int> getFirstNPerfectNumbers(int n);

#endif
