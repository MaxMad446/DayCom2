// Auto-generated module | 2026-05-12T04:22:27.840938
#include <iostream>
#include <vector>

int compute_125() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
