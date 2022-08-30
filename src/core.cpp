// Auto-generated module | 2026-05-11T21:17:06.099180
#include <iostream>
#include <vector>

int compute_852() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
