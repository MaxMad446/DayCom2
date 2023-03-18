// Auto-generated module | 2026-05-11T21:42:51.320487
#include <iostream>
#include <vector>

int compute_908() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_908() << std::endl;
    return 0;
}
