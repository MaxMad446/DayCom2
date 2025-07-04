// Auto-generated module | 2026-05-12T21:23:41.116547
#include <iostream>
#include <vector>

int compute_125() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
