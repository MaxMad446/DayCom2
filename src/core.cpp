// Auto-generated module | 2026-05-11T20:51:28.917481
#include <iostream>
#include <vector>

int compute_561() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
