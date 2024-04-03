// Auto-generated module | 2026-05-11T22:32:58.147381
#include <iostream>
#include <vector>

int compute_380() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
