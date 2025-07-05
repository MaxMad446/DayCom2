// Auto-generated module | 2026-05-12T21:23:50.708189
#include <iostream>
#include <vector>

int compute_509() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
