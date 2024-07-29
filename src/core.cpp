// Auto-generated module | 2026-05-11T22:48:09.443821
#include <iostream>
#include <vector>

int compute_910() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_910() << std::endl;
    return 0;
}
