// Auto-generated module | 2026-05-11T22:16:13.644555
#include <iostream>
#include <vector>

int compute_354() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
