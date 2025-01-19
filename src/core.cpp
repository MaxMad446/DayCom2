// Auto-generated module | 2026-05-12T21:09:37.500264
#include <iostream>
#include <vector>

int compute_698() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
