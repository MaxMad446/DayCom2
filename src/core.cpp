// Auto-generated module | 2026-05-12T20:59:23.263157
#include <iostream>
#include <vector>

int compute_324() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_324() << std::endl;
    return 0;
}
