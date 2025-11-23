// Auto-generated module | 2026-05-12T04:35:57.090081
#include <iostream>
#include <vector>

int compute_925() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
