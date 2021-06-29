// Auto-generated module | 2026-05-12T20:49:57.639025
#include <iostream>
#include <vector>

int compute_202() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
