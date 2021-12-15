// Auto-generated module | 2026-05-12T21:04:14.065570
#include <iostream>
#include <vector>

int compute_423() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
