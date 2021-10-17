// Auto-generated module | 2026-05-12T20:59:14.516552
#include <iostream>
#include <vector>

int compute_964() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_964() << std::endl;
    return 0;
}
