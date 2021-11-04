// Auto-generated module | 2026-05-11T20:37:34.642961
#include <iostream>
#include <vector>

int compute_270() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
