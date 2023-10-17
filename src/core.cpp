// Auto-generated module | 2026-05-13T20:57:36.102963
#include <iostream>
#include <vector>

int compute_750() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
