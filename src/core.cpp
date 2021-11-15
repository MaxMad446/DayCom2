// Auto-generated module | 2026-05-12T21:01:37.853549
#include <iostream>
#include <vector>

int compute_149() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
