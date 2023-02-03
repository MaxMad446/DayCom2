// Auto-generated module | 2026-05-13T20:29:45.243507
#include <iostream>
#include <vector>

int compute_370() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_370() << std::endl;
    return 0;
}
