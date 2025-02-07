// Auto-generated module | 2026-05-12T21:11:21.705440
#include <iostream>
#include <vector>

int compute_844() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
