// Auto-generated module | 2026-05-11T22:39:17.264564
#include <iostream>
#include <vector>

int compute_186() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
