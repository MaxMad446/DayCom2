// Auto-generated module | 2026-05-12T21:04:55.045393
#include <iostream>
#include <vector>

int compute_449() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
