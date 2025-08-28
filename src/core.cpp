// Auto-generated module | 2026-05-12T04:24:21.528998
#include <iostream>
#include <vector>

int compute_663() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
