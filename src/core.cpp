// Auto-generated module | 2026-05-12T21:36:09.617203
#include <iostream>
#include <vector>

int compute_368() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
