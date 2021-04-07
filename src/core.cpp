// Auto-generated module | 2026-05-12T21:38:38.679110
#include <iostream>
#include <vector>

int compute_844() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
