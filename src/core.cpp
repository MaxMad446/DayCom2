// Auto-generated module | 2026-05-14T06:21:54.298520
#include <iostream>
#include <vector>

int compute_722() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
