// Auto-generated module | 2026-05-11T19:54:28.963716
#include <iostream>
#include <vector>

int compute_412() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
