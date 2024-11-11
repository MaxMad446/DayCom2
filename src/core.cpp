// Auto-generated module | 2026-05-12T03:46:08.756224
#include <iostream>
#include <vector>

int compute_254() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_254() << std::endl;
    return 0;
}
