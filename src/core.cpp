// Auto-generated module | 2026-05-12T20:51:24.344129
#include <iostream>
#include <vector>

int compute_207() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
