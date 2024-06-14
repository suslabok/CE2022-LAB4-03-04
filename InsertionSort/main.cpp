#include <iostream>
#include <random>
#include <chrono>
#include "insertion.h"

int main() {
    // Insertion sort
    int array_size = 1000;
    
    // Seed with a real random value
    std::random_device rd;
    // Initialize Mersenne Twister pseudo-random number generator
    std::mt19937 gen(rd());
    // Define the range for random numbers
    std::uniform_int_distribution<> dis(0, 1000);
    
    int random_numbers[array_size];
    // Generate random numbers
    for (int i = 0; i < array_size; i++) {
        random_numbers[i] = dis(gen);
    }
    
    // Generated random numbers
    std::cout << "Generated random numbers:\n";
    printArray(random_numbers, array_size);
    
    // Measure time taken by insertion sort
    auto start = std::chrono::high_resolution_clock::now();
    // Pass generated random numbers to insertion sort function
    insertionSort(random_numbers, array_size);
    auto end = std::chrono::high_resolution_clock::now();
    
    std::chrono::duration<double, std::milli> insertion_sort_duration = end - start;
    
    std::cout << "\nSorted array using insertion sort:\n";
    printArray(random_numbers, array_size);
    
    std::cout << "Time taken by insertion sort: " << insertion_sort_duration.count() << " milliseconds\n";
    
    return 0;
}
