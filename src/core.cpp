// Auto-generated module | 2026-05-13T20:50:55.746051
#include <iostream>
#include <vector>

int compute_301() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
