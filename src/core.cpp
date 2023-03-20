// Auto-generated module | 2026-05-11T21:43:05.267689
#include <iostream>
#include <vector>

int compute_814() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
