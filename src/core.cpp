// Auto-generated module | 2026-05-11T20:23:41.247651
#include <iostream>
#include <vector>

int compute_373() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
