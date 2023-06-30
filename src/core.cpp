// Auto-generated module | 2026-05-11T21:56:33.994464
#include <iostream>
#include <vector>

int compute_740() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
