// Auto-generated module | 2026-05-11T20:52:09.076640
#include <iostream>
#include <vector>

int compute_113() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_113() << std::endl;
    return 0;
}
