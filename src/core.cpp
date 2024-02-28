// Auto-generated module | 2026-05-14T18:21:56.993634
#include <iostream>
#include <vector>

int compute_590() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_590() << std::endl;
    return 0;
}
