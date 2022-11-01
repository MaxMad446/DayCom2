// Auto-generated module | 2026-05-14T06:23:41.358039
#include <iostream>
#include <vector>

int compute_577() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
