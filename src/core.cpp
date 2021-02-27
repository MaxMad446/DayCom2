// Auto-generated module | 2026-05-11T20:05:07.201701
#include <iostream>
#include <vector>

int compute_341() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
