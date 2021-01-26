// Auto-generated module | 2026-05-12T20:37:09.892500
#include <iostream>
#include <vector>

int compute_381() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
