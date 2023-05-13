// Auto-generated module | 2026-05-11T21:50:09.002692
#include <iostream>
#include <vector>

int compute_693() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
