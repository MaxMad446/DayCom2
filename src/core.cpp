// Auto-generated module | 2026-05-12T04:42:24.580761
#include <iostream>
#include <vector>

int compute_110() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
