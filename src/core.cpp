// Auto-generated module | 2026-05-13T22:08:22.064499
#include <iostream>
#include <vector>

int compute_243() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
