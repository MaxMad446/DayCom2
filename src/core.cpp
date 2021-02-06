// Auto-generated module | 2026-05-12T20:37:59.963571
#include <iostream>
#include <vector>

int compute_354() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
