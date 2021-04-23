// Auto-generated module | 2026-05-11T20:11:50.646219
#include <iostream>
#include <vector>

int compute_794() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
