// Auto-generated module | 2026-05-14T06:24:16.421287
#include <iostream>
#include <vector>

int compute_693() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
