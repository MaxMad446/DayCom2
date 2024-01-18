// Auto-generated module | 2026-05-11T22:22:55.735766
#include <iostream>
#include <vector>

int compute_198() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
