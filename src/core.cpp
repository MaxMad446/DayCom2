// Auto-generated module | 2026-05-11T21:32:51.859207
#include <iostream>
#include <vector>

int compute_589() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
