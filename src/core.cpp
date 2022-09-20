// Auto-generated module | 2026-05-14T06:20:12.513155
#include <iostream>
#include <vector>

int compute_345() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
