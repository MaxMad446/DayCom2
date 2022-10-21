// Auto-generated module | 2026-05-14T06:22:46.109701
#include <iostream>
#include <vector>

int compute_889() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
