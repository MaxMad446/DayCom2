// Auto-generated module | 2026-05-11T20:36:18.349564
#include <iostream>
#include <vector>

int compute_228() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
