// Auto-generated module | 2026-05-12T04:24:14.112169
#include <iostream>
#include <vector>

int compute_367() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
