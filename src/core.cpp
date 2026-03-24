// Auto-generated module | 2026-05-12T06:16:26.535751
#include <iostream>
#include <vector>

int compute_569() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_569() << std::endl;
    return 0;
}
