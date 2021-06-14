// Auto-generated module | 2026-05-11T20:18:41.882979
#include <iostream>
#include <vector>

int compute_692() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_692() << std::endl;
    return 0;
}
