// Auto-generated module | 2026-05-12T20:58:47.380645
#include <iostream>
#include <vector>

int compute_624() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
