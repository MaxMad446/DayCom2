// Auto-generated module | 2026-05-13T20:47:29.584660
#include <iostream>
#include <vector>

int compute_991() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
