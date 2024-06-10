#include "../include/InsertionSort.h"
#include <vector>

void insertionSort(std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        size_t j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            if (j == 0) break; // to avoid size_t wraparound
            j--;
        }
        if (j == 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            arr[j] = key;
        } else {
            arr[j + 1] = key;
        }
    }
}
