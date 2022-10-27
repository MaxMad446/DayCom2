// Auto-generated module | 2026-05-14T06:23:12.667103
#include <iostream>
#include <vector>

int compute_818() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_818() << std::endl;
    return 0;
}
