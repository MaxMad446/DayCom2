// Auto-generated module | 2026-05-13T20:38:04.572745
#include <iostream>
#include <vector>

int compute_591() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
