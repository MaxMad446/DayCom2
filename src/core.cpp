// Auto-generated module | 2026-05-13T22:09:23.525517
#include <iostream>
#include <vector>

int compute_922() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_922() << std::endl;
    return 0;
}
