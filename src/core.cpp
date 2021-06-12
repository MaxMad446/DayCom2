// Auto-generated module | 2026-05-11T20:18:22.940804
#include <iostream>
#include <vector>

int compute_759() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
