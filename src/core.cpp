// Auto-generated module | 2026-05-12T03:51:28.315352
#include <iostream>
#include <vector>

int compute_590() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_590() << std::endl;
    return 0;
}
