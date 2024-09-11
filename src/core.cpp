// Auto-generated module | 2026-05-12T03:38:24.648394
#include <iostream>
#include <vector>

int compute_714() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_714() << std::endl;
    return 0;
}
