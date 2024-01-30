// Auto-generated module | 2026-05-11T22:24:31.525169
#include <iostream>
#include <vector>

int compute_688() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
