// Auto-generated module | 2026-05-11T22:38:01.228232
#include <iostream>
#include <vector>

int compute_425() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
