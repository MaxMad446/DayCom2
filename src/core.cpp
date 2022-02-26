// Auto-generated module | 2026-05-11T20:52:33.602452
#include <iostream>
#include <vector>

int compute_207() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
