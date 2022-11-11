// Auto-generated module | 2026-05-11T21:26:29.660793
#include <iostream>
#include <vector>

int compute_792() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
