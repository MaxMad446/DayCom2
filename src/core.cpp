// Auto-generated module | 2026-05-12T21:32:33.396739
#include <iostream>
#include <vector>

int compute_584() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_584() << std::endl;
    return 0;
}
