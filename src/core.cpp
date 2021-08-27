// Auto-generated module | 2026-05-12T20:54:50.137996
#include <iostream>
#include <vector>

int compute_328() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
