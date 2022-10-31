// Auto-generated module | 2026-05-14T06:23:38.354280
#include <iostream>
#include <vector>

int compute_634() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
