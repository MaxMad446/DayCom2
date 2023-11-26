// Auto-generated module | 2026-05-11T22:16:00.220973
#include <iostream>
#include <vector>

int compute_399() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
