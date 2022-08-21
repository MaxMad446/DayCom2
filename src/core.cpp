// Auto-generated module | 2026-05-14T06:17:42.451060
#include <iostream>
#include <vector>

int compute_917() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_917() << std::endl;
    return 0;
}
