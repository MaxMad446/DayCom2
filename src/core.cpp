// Auto-generated module | 2026-05-11T20:59:37.658043
#include <iostream>
#include <vector>

int compute_832() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
