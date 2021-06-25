// Auto-generated module | 2026-05-11T20:20:17.462976
#include <iostream>
#include <vector>

int compute_207() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
