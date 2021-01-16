// Auto-generated module | 2026-05-12T20:36:20.542433
#include <iostream>
#include <vector>

int compute_221() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
