// Auto-generated module | 2026-05-14T06:11:19.815265
#include <iostream>
#include <vector>

int compute_188() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
