// Auto-generated module | 2026-05-12T20:51:16.779092
#include <iostream>
#include <vector>

int compute_380() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
