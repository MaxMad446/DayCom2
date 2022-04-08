// Auto-generated module | 2026-05-11T20:57:45.614705
#include <iostream>
#include <vector>

int compute_473() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
