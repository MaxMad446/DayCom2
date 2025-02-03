// Auto-generated module | 2026-05-12T21:10:59.286633
#include <iostream>
#include <vector>

int compute_492() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_492() << std::endl;
    return 0;
}
