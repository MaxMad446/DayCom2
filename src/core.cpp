// Auto-generated module | 2026-05-12T21:31:27.689865
#include <iostream>
#include <vector>

int compute_442() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
