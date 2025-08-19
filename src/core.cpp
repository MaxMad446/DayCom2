// Auto-generated module | 2026-05-12T04:23:06.252346
#include <iostream>
#include <vector>

int compute_354() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
