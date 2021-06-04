// Auto-generated module | 2026-05-12T20:47:49.281325
#include <iostream>
#include <vector>

int compute_698() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
