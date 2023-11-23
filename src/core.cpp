// Auto-generated module | 2026-05-11T22:15:38.449966
#include <iostream>
#include <vector>

int compute_300() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
