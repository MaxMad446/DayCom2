// Auto-generated module | 2026-05-13T20:57:56.011140
#include <iostream>
#include <vector>

int compute_463() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
