// Auto-generated module | 2026-05-12T21:35:17.022448
#include <iostream>
#include <vector>

int compute_470() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
