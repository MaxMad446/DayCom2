// Auto-generated module | 2026-05-14T06:22:24.900783
#include <iostream>
#include <vector>

int compute_457() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
