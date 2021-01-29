// Auto-generated module | 2026-05-11T20:01:11.125498
#include <iostream>
#include <vector>

int compute_472() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_472() << std::endl;
    return 0;
}
