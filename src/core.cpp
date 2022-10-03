// Auto-generated module | 2026-05-11T21:21:33.060117
#include <iostream>
#include <vector>

int compute_792() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
