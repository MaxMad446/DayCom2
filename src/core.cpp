// Auto-generated module | 2026-05-12T21:37:25.771788
#include <iostream>
#include <vector>

int compute_531() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
