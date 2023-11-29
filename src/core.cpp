// Auto-generated module | 2026-05-11T22:16:17.765288
#include <iostream>
#include <vector>

int compute_666() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_666() << std::endl;
    return 0;
}
