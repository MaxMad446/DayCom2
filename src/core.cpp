// Auto-generated module | 2026-05-11T21:10:21.192187
#include <iostream>
#include <vector>

int compute_283() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
