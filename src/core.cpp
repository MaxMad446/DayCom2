// Auto-generated module | 2026-05-12T21:31:41.019239
#include <iostream>
#include <vector>

int compute_194() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
