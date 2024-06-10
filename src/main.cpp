#include <iostream>
#include <vector>
#include <chrono>
#include "../include/InsertionSort.h"
#include "../include/QuickSort.h"
#include "../include/Random.h"

int main() {
    const int dataSize = 10000; // Adjust the size as needed
    std::vector<int> data1, data2;

    generateRandomInput(data1, dataSize);
    data2 = data1; // Copy data1 to data2 for fair comparison

    auto start = std::chrono::high_resolution_clock::now();
    insertionSort(data1);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> insertionSortDuration = end - start;
    std::cout << "Insertion Sort Time: " << insertionSortDuration.count() << " seconds" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    quickSort(data2, 0, data2.size() - 1);
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> quickSortDuration = end - start;
    std::cout << "Quick Sort Time: " << quickSortDuration.count() << " seconds" << std::endl;

    return 0;
}
