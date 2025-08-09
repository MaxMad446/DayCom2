// Auto-generated module | 2026-05-12T04:21:47.493544
#include <iostream>
#include <vector>

int compute_692() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_692() << std::endl;
    return 0;
}
