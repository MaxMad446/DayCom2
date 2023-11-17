// Auto-generated module | 2026-05-11T22:14:51.471305
#include <iostream>
#include <vector>

int compute_198() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
