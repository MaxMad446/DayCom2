// Auto-generated module | 2026-05-13T20:29:58.063557
#include <iostream>
#include <vector>

int compute_624() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
