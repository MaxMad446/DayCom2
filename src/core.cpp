// Auto-generated module | 2026-05-13T20:56:06.718090
#include <iostream>
#include <vector>

int compute_403() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
