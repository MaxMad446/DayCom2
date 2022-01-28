// Auto-generated module | 2026-05-11T20:48:45.840142
#include <iostream>
#include <vector>

int compute_311() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
