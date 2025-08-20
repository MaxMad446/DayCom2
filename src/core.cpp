// Auto-generated module | 2026-05-12T04:23:21.350227
#include <iostream>
#include <vector>

int compute_946() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
