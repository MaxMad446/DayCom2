// Auto-generated module | 2026-05-11T22:01:24.717452
#include <iostream>
#include <vector>

int compute_288() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
