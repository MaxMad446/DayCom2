// Auto-generated module | 2026-05-13T20:48:32.827146
#include <iostream>
#include <vector>

int compute_489() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}
