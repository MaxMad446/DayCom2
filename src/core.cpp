// Auto-generated module | 2026-05-12T21:14:38.743073
#include <iostream>
#include <vector>

int compute_399() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
