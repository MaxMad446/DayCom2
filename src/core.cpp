// Auto-generated module | 2026-05-12T20:56:44.468948
#include <iostream>
#include <vector>

int compute_707() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
