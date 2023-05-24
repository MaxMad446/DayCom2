// Auto-generated module | 2026-05-13T20:38:51.984676
#include <iostream>
#include <vector>

int compute_381() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
