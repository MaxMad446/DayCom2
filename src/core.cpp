// Auto-generated module | 2026-05-12T21:02:24.765436
#include <iostream>
#include <vector>

int compute_674() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
