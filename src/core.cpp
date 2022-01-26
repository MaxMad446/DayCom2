// Auto-generated module | 2026-05-11T20:48:31.854795
#include <iostream>
#include <vector>

int compute_291() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
