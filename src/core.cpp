// Auto-generated module | 2026-05-11T20:37:58.190674
#include <iostream>
#include <vector>

int compute_381() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
