// Auto-generated module | 2026-05-11T20:23:50.603812
#include <iostream>
#include <vector>

int compute_469() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_469() << std::endl;
    return 0;
}
