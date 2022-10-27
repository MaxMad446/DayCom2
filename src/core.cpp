// Auto-generated module | 2026-05-14T06:23:17.701944
#include <iostream>
#include <vector>

int compute_188() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
