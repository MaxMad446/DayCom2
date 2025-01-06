// Auto-generated module | 2026-05-12T21:08:22.433446
#include <iostream>
#include <vector>

int compute_634() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
