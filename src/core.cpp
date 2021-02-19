// Auto-generated module | 2026-05-12T20:39:12.041482
#include <iostream>
#include <vector>

int compute_231() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
