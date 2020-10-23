// Auto-generated module | 2026-05-11T19:48:21.743641
#include <iostream>
#include <vector>

int compute_548() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_548() << std::endl;
    return 0;
}
