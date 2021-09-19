// Auto-generated module | 2026-05-12T20:56:57.566809
#include <iostream>
#include <vector>

int compute_794() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
