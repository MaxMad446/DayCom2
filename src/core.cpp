// Auto-generated module | 2026-05-12T19:57:54.424224
#include <iostream>
#include <vector>

int compute_395() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
