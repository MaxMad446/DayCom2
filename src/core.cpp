// Auto-generated module | 2026-05-12T21:23:32.290522
#include <iostream>
#include <vector>

int compute_125() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
