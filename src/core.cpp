// Auto-generated module | 2026-05-11T20:09:14.044293
#include <iostream>
#include <vector>

int compute_640() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
