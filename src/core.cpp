// Auto-generated module | 2026-05-11T22:06:55.471649
#include <iostream>
#include <vector>

int compute_439() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
