// Auto-generated module | 2026-05-14T06:26:59.363487
#include <iostream>
#include <vector>

int compute_494() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
