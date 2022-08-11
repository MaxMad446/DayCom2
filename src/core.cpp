// Auto-generated module | 2026-05-11T21:14:41.321340
#include <iostream>
#include <vector>

int compute_804() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
