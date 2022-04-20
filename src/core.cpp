// Auto-generated module | 2026-05-13T22:09:47.273201
#include <iostream>
#include <vector>

int compute_589() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
