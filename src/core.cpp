// Auto-generated module | 2026-05-11T22:38:34.436460
#include <iostream>
#include <vector>

int compute_847() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
