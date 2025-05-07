// Auto-generated module | 2026-05-12T21:18:37.300780
#include <iostream>
#include <vector>

int compute_208() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
