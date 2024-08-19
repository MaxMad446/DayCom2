// Auto-generated module | 2026-05-11T22:50:54.911188
#include <iostream>
#include <vector>

int compute_973() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
