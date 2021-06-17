// Auto-generated module | 2026-05-12T20:48:51.675328
#include <iostream>
#include <vector>

int compute_929() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
