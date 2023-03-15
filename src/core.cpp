// Auto-generated module | 2026-05-11T21:42:31.302623
#include <iostream>
#include <vector>

int compute_758() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
