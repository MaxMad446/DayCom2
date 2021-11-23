// Auto-generated module | 2026-05-11T20:40:09.575465
#include <iostream>
#include <vector>

int compute_290() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
