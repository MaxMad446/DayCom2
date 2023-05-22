// Auto-generated module | 2026-05-11T21:51:25.866651
#include <iostream>
#include <vector>

int compute_345() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
