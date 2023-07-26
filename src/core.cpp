// Auto-generated module | 2026-05-13T20:50:47.154832
#include <iostream>
#include <vector>

int compute_837() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
