// Auto-generated module | 2026-05-11T20:51:31.511306
#include <iostream>
#include <vector>

int compute_753() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
