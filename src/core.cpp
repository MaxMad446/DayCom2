// Auto-generated module | 2026-05-12T04:02:56.601012
#include <iostream>
#include <vector>

int compute_482() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
