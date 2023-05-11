// Auto-generated module | 2026-05-13T20:37:47.387049
#include <iostream>
#include <vector>

int compute_823() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_823() << std::endl;
    return 0;
}
