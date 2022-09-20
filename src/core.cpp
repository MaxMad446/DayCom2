// Auto-generated module | 2026-05-11T21:19:44.967267
#include <iostream>
#include <vector>

int compute_207() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
