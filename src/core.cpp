// Auto-generated module | 2026-05-11T20:30:00.337378
#include <iostream>
#include <vector>

int compute_249() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_249() << std::endl;
    return 0;
}
