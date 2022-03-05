// Auto-generated module | 2026-05-13T22:05:50.094611
#include <iostream>
#include <vector>

int compute_633() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
