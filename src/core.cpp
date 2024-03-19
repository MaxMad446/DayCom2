// Auto-generated module | 2026-05-14T18:23:27.305580
#include <iostream>
#include <vector>

int compute_397() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_397() << std::endl;
    return 0;
}
