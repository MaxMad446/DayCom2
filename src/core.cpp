// Auto-generated module | 2026-05-11T20:26:20.284792
#include <iostream>
#include <vector>

int compute_562() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_562() << std::endl;
    return 0;
}
