// Auto-generated module | 2026-05-11T20:48:46.913685
#include <iostream>
#include <vector>

int compute_950() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_950() << std::endl;
    return 0;
}
