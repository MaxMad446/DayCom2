// Auto-generated module | 2026-05-13T20:29:16.440470
#include <iostream>
#include <vector>

int compute_837() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
