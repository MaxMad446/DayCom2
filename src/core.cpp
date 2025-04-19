// Auto-generated module | 2026-05-12T21:17:14.350321
#include <iostream>
#include <vector>

int compute_495() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
