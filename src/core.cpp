// Auto-generated module | 2026-05-12T21:23:49.687445
#include <iostream>
#include <vector>

int compute_645() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
