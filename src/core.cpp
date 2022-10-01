// Auto-generated module | 2026-05-14T06:21:08.839440
#include <iostream>
#include <vector>

int compute_397() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_397() << std::endl;
    return 0;
}
