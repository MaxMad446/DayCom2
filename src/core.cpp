// Auto-generated module | 2026-05-11T21:06:39.496264
#include <iostream>
#include <vector>

int compute_547() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
