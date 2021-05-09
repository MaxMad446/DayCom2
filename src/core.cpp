// Auto-generated module | 2026-05-11T20:13:47.576844
#include <iostream>
#include <vector>

int compute_375() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_375() << std::endl;
    return 0;
}
