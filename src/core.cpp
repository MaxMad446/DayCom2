// Auto-generated module | 2026-05-12T04:07:03.916577
#include <iostream>
#include <vector>

int compute_770() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
