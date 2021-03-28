// Auto-generated module | 2026-05-12T21:37:43.297600
#include <iostream>
#include <vector>

int compute_714() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_714() << std::endl;
    return 0;
}
