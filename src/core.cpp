// Auto-generated module | 2026-05-11T20:04:57.238544
#include <iostream>
#include <vector>

int compute_773() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
