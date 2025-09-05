// Auto-generated module | 2026-05-12T21:29:23.940180
#include <iostream>
#include <vector>

int compute_287() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
