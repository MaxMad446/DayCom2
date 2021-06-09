// Auto-generated module | 2026-05-11T20:18:04.233409
#include <iostream>
#include <vector>

int compute_262() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_262() << std::endl;
    return 0;
}
