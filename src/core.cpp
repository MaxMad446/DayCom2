// Auto-generated module | 2026-05-12T20:48:04.489358
#include <iostream>
#include <vector>

int compute_621() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_621() << std::endl;
    return 0;
}
