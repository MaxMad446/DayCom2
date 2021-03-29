// Auto-generated module | 2026-05-12T21:37:50.228430
#include <iostream>
#include <vector>

int compute_750() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
