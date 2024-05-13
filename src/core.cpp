// Auto-generated module | 2026-05-11T22:38:09.027624
#include <iostream>
#include <vector>

int compute_974() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
