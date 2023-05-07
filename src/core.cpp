// Auto-generated module | 2026-05-11T21:49:16.908713
#include <iostream>
#include <vector>

int compute_361() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
