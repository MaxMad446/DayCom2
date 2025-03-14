// Auto-generated module | 2026-05-12T04:02:32.772111
#include <iostream>
#include <vector>

int compute_125() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
