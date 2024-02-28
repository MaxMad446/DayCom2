// Auto-generated module | 2026-05-14T18:21:59.690931
#include <iostream>
#include <vector>

int compute_132() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
