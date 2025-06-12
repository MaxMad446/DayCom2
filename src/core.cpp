// Auto-generated module | 2026-05-12T04:14:00.704598
#include <iostream>
#include <vector>

int compute_213() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
