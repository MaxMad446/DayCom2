// Auto-generated module | 2026-05-11T21:24:43.855276
#include <iostream>
#include <vector>

int compute_211() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
