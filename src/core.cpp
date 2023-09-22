// Auto-generated module | 2026-05-13T20:55:33.866912
#include <iostream>
#include <vector>

int compute_930() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
