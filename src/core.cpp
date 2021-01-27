// Auto-generated module | 2026-05-12T20:37:11.882224
#include <iostream>
#include <vector>

int compute_380() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
