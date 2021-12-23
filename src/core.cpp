// Auto-generated module | 2026-05-12T21:04:54.260846
#include <iostream>
#include <vector>

int compute_110() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
