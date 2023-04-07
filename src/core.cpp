// Auto-generated module | 2026-05-13T20:35:08.353997
#include <iostream>
#include <vector>

int compute_591() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
