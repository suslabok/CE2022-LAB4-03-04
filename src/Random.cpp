#include "../include/Random.h"
#include <random>

void generateRandomInput(std::vector<int>& arr, int size) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 10000);

    for (int i = 0; i < size; ++i) {
        arr.push_back(dis(gen));
    }
}
