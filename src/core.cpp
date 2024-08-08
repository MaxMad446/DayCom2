// Auto-generated module | 2026-05-11T22:49:31.235390
#include <iostream>
#include <vector>

int compute_145() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
