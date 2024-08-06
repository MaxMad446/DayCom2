// Auto-generated module | 2026-05-11T22:49:14.201317
#include <iostream>
#include <vector>

int compute_589() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
