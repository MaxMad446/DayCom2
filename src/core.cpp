// Auto-generated module | 2026-05-12T21:24:29.426573
#include <iostream>
#include <vector>

int compute_431() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
