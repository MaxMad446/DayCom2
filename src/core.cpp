// Auto-generated module | 2026-05-12T20:37:34.097764
#include <iostream>
#include <vector>

int compute_208() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
