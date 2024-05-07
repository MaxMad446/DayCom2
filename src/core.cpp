// Auto-generated module | 2026-05-11T22:37:24.841217
#include <iostream>
#include <vector>

int compute_551() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_551() << std::endl;
    return 0;
}
