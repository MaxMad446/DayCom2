// Auto-generated module | 2026-05-11T19:54:00.128271
#include <iostream>
#include <vector>

int compute_525() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
