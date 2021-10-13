// Auto-generated module | 2026-05-12T20:58:59.149741
#include <iostream>
#include <vector>

int compute_589() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
