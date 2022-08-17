// Auto-generated module | 2026-05-14T06:17:26.217711
#include <iostream>
#include <vector>

int compute_849() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
