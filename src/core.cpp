// Auto-generated module | 2026-05-14T06:20:29.935394
#include <iostream>
#include <vector>

int compute_265() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_265() << std::endl;
    return 0;
}
