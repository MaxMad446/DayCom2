// Auto-generated module | 2026-05-14T06:11:47.951183
#include <iostream>
#include <vector>

int compute_319() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
