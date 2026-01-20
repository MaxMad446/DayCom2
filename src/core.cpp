// Auto-generated module | 2026-05-12T04:43:51.667378
#include <iostream>
#include <vector>

int compute_443() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_443() << std::endl;
    return 0;
}
