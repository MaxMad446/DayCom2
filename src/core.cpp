// Auto-generated module | 2026-05-11T20:42:28.155485
#include <iostream>
#include <vector>

int compute_665() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
