// Auto-generated module | 2026-05-12T21:34:59.021413
#include <iostream>
#include <vector>

int compute_658() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
