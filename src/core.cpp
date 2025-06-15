// Auto-generated module | 2026-05-12T04:14:30.639224
#include <iostream>
#include <vector>

int compute_410() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
