// Auto-generated module | 2026-05-11T21:07:41.968462
#include <iostream>
#include <vector>

int compute_244() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
