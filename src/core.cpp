// Auto-generated module | 2026-05-13T20:27:50.537902
#include <iostream>
#include <vector>

int compute_380() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
