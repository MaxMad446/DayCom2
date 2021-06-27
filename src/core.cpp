// Auto-generated module | 2026-05-12T20:49:41.273151
#include <iostream>
#include <vector>

int compute_260() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
