// Auto-generated module | 2026-05-14T06:21:32.136447
#include <iostream>
#include <vector>

int compute_974() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
