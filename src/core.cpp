// Auto-generated module | 2026-05-14T06:22:28.949613
#include <iostream>
#include <vector>

int compute_364() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
