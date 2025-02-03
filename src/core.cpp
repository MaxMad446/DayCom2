// Auto-generated module | 2026-05-12T21:10:57.704057
#include <iostream>
#include <vector>

int compute_605() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
