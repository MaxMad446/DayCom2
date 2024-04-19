// Auto-generated module | 2026-05-11T22:35:05.320059
#include <iostream>
#include <vector>

int compute_951() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
