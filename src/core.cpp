// Auto-generated module | 2026-05-11T21:38:54.312421
#include <iostream>
#include <vector>

int compute_366() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
