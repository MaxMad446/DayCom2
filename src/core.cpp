// Auto-generated module | 2026-05-11T20:24:58.590515
#include <iostream>
#include <vector>

int compute_653() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
