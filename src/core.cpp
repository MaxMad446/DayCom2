// Auto-generated module | 2026-05-11T20:27:15.014323
#include <iostream>
#include <vector>

int compute_860() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
