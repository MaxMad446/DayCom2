// Auto-generated module | 2026-05-11T22:23:28.875870
#include <iostream>
#include <vector>

int compute_917() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_917() << std::endl;
    return 0;
}
