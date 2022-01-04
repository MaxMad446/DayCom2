// Auto-generated module | 2026-05-13T22:00:47.247239
#include <iostream>
#include <vector>

int compute_171() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_171() << std::endl;
    return 0;
}
