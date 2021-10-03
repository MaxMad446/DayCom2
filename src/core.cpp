// Auto-generated module | 2026-05-11T20:33:09.942220
#include <iostream>
#include <vector>

int compute_849() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
