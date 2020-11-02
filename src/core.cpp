// Auto-generated module | 2026-05-14T18:04:20.621126
#include <iostream>
#include <vector>

int compute_412() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
