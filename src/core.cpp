// Auto-generated module | 2026-05-14T06:28:41.086511
#include <iostream>
#include <vector>

int compute_788() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
