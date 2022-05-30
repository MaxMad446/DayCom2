// Auto-generated module | 2026-05-11T21:04:47.881151
#include <iostream>
#include <vector>

int compute_207() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
