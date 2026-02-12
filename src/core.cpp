// Auto-generated module | 2026-05-12T04:47:07.261545
#include <iostream>
#include <vector>

int compute_591() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
