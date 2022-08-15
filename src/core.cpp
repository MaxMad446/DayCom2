// Auto-generated module | 2026-05-11T21:15:10.296552
#include <iostream>
#include <vector>

int compute_213() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
