// Auto-generated module | 2026-05-12T19:59:33.691256
#include <iostream>
#include <vector>

int compute_847() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
