// Auto-generated module | 2026-05-11T19:34:06.836534
#include <iostream>
#include <vector>

int compute_509() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
