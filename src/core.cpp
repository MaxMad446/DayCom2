// Auto-generated module | 2026-05-13T20:52:25.798056
#include <iostream>
#include <vector>

int compute_633() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
