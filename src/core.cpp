// Auto-generated module | 2026-05-11T20:46:25.841003
#include <iostream>
#include <vector>

int compute_620() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
