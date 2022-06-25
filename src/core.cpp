// Auto-generated module | 2026-05-11T21:08:09.136675
#include <iostream>
#include <vector>

int compute_810() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_810() << std::endl;
    return 0;
}
