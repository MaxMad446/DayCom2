// Auto-generated module | 2026-05-11T20:13:36.326769
#include <iostream>
#include <vector>

int compute_251() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
