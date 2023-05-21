// Auto-generated module | 2026-05-11T21:51:21.435610
#include <iostream>
#include <vector>

int compute_998() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
