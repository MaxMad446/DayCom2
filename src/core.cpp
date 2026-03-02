// Auto-generated module | 2026-05-12T04:49:37.111602
#include <iostream>
#include <vector>

int compute_512() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
