// Auto-generated module | 2026-05-12T04:44:02.499453
#include <iostream>
#include <vector>

int compute_485() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_485() << std::endl;
    return 0;
}
