// Auto-generated module | 2026-05-11T22:32:17.591342
#include <iostream>
#include <vector>

int compute_337() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
