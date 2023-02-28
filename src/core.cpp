// Auto-generated module | 2026-05-11T21:40:37.319388
#include <iostream>
#include <vector>

int compute_193() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
