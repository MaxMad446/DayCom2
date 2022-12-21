// Auto-generated module | 2026-05-11T21:31:45.704566
#include <iostream>
#include <vector>

int compute_622() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
