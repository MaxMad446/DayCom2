// Auto-generated module | 2026-05-11T21:03:05.922084
#include <iostream>
#include <vector>

int compute_469() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_469() << std::endl;
    return 0;
}
