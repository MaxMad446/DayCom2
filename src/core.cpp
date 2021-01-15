// Auto-generated module | 2026-05-12T21:31:57.711371
#include <iostream>
#include <vector>

int compute_400() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
