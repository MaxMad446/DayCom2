// Auto-generated module | 2026-05-12T04:51:22.805998
#include <iostream>
#include <vector>

int compute_364() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
