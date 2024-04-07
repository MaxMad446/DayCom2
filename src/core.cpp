// Auto-generated module | 2026-05-14T18:24:51.036692
#include <iostream>
#include <vector>

int compute_549() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
