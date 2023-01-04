// Auto-generated module | 2026-05-11T21:33:48.694099
#include <iostream>
#include <vector>

int compute_569() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_569() << std::endl;
    return 0;
}
