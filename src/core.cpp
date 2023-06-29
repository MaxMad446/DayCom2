// Auto-generated module | 2026-05-13T20:48:30.891991
#include <iostream>
#include <vector>

int compute_352() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
