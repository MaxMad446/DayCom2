// Auto-generated module | 2026-05-11T21:14:34.523851
#include <iostream>
#include <vector>

int compute_702() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_702() << std::endl;
    return 0;
}
