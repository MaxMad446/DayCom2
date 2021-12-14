// Auto-generated module | 2026-05-11T20:42:57.867492
#include <iostream>
#include <vector>

int compute_448() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
