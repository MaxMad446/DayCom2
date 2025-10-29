// Auto-generated module | 2026-05-12T04:32:49.166821
#include <iostream>
#include <vector>

int compute_705() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
