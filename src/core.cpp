// Auto-generated module | 2026-05-12T21:14:08.427876
#include <iostream>
#include <vector>

int compute_846() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_846() << std::endl;
    return 0;
}
