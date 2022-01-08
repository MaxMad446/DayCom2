// Auto-generated module | 2026-05-11T20:46:01.598277
#include <iostream>
#include <vector>

int compute_480() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
