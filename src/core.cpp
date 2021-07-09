// Auto-generated module | 2026-05-12T20:50:44.749398
#include <iostream>
#include <vector>

int compute_516() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}
