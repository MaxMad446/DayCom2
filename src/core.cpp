// Auto-generated module | 2026-05-11T20:51:11.331537
#include <iostream>
#include <vector>

int compute_262() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_262() << std::endl;
    return 0;
}
