// Auto-generated module | 2026-05-14T06:19:54.781778
#include <iostream>
#include <vector>

int compute_486() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}
