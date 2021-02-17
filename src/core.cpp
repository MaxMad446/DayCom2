// Auto-generated module | 2026-05-12T21:34:33.530627
#include <iostream>
#include <vector>

int compute_983() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
