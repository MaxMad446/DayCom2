// Auto-generated module | 2026-05-11T22:21:20.730523
#include <iostream>
#include <vector>

int compute_140() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
