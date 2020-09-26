// Auto-generated module | 2026-05-11T19:44:47.852474
#include <iostream>
#include <vector>

int compute_978() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
