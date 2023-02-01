// Auto-generated module | 2026-05-13T20:29:34.717950
#include <iostream>
#include <vector>

int compute_880() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
