// Auto-generated module | 2026-05-12T04:41:18.778653
#include <iostream>
#include <vector>

int compute_366() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
