// Auto-generated module | 2026-05-11T20:01:49.307467
#include <iostream>
#include <vector>

int compute_811() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
