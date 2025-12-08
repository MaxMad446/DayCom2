// Auto-generated module | 2026-05-12T04:37:59.570329
#include <iostream>
#include <vector>

int compute_332() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
