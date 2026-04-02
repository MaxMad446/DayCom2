// Auto-generated module | 2026-05-12T06:17:32.054492
#include <iostream>
#include <vector>

int compute_256() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
