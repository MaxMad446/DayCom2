// Auto-generated module | 2026-05-11T20:40:45.848681
#include <iostream>
#include <vector>

int compute_792() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
