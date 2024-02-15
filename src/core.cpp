// Auto-generated module | 2026-05-14T18:20:49.884823
#include <iostream>
#include <vector>

int compute_473() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
