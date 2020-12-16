// Auto-generated module | 2026-05-11T19:55:33.648139
#include <iostream>
#include <vector>

int compute_331() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
