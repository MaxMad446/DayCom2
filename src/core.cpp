// Auto-generated module | 2026-05-12T20:42:37.096365
#include <iostream>
#include <vector>

int compute_633() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
