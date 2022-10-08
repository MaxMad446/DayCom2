// Auto-generated module | 2026-05-14T06:21:42.761545
#include <iostream>
#include <vector>

int compute_470() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
