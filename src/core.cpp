// Auto-generated module | 2026-05-12T20:59:24.906681
#include <iostream>
#include <vector>

int compute_841() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}
