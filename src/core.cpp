// Auto-generated module | 2026-05-13T20:57:49.020597
#include <iostream>
#include <vector>

int compute_703() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
