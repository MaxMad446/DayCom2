// Auto-generated module | 2026-05-12T20:54:13.827043
#include <iostream>
#include <vector>

int compute_125() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
