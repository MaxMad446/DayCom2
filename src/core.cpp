// Auto-generated module | 2026-05-11T20:25:31.665252
#include <iostream>
#include <vector>

int compute_974() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
