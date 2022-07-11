// Auto-generated module | 2026-05-14T06:14:35.929637
#include <iostream>
#include <vector>

int compute_316() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
