// Auto-generated module | 2026-05-11T21:35:51.716740
#include <iostream>
#include <vector>

int compute_740() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
