// Auto-generated module | 2026-05-12T20:49:58.551208
#include <iostream>
#include <vector>

int compute_912() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
