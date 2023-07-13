// Auto-generated module | 2026-05-13T20:49:48.545963
#include <iostream>
#include <vector>

int compute_300() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
