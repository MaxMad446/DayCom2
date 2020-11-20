// Auto-generated module | 2026-05-14T18:06:46.735453
#include <iostream>
#include <vector>

int compute_321() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
