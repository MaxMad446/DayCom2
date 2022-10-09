// Auto-generated module | 2026-05-14T06:21:47.467767
#include <iostream>
#include <vector>

int compute_549() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
