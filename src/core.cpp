// Auto-generated module | 2026-05-12T20:54:03.592653
#include <iostream>
#include <vector>

int compute_927() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_927() << std::endl;
    return 0;
}
