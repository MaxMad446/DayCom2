// Auto-generated module | 2026-05-11T20:06:20.213792
#include <iostream>
#include <vector>

int compute_160() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
