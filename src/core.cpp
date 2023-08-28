// Auto-generated module | 2026-05-13T20:53:23.929008
#include <iostream>
#include <vector>

int compute_110() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
