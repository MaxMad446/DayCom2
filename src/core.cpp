// Auto-generated module | 2026-05-12T20:49:46.511355
#include <iostream>
#include <vector>

int compute_853() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
