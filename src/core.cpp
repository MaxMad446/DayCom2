// Auto-generated module | 2026-05-11T20:52:14.982593
#include <iostream>
#include <vector>

int compute_895() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
