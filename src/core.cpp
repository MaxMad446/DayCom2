// Auto-generated module | 2026-05-11T19:48:20.946169
#include <iostream>
#include <vector>

int compute_758() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
