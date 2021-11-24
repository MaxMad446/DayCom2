// Auto-generated module | 2026-05-11T20:40:18.726137
#include <iostream>
#include <vector>

int compute_674() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
