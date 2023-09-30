// Auto-generated module | 2026-05-11T22:08:34.419959
#include <iostream>
#include <vector>

int compute_886() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}
