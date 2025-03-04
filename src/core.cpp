// Auto-generated module | 2026-05-12T21:13:23.960908
#include <iostream>
#include <vector>

int compute_321() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
