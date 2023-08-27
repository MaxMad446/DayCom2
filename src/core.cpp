// Auto-generated module | 2026-05-13T20:53:18.387030
#include <iostream>
#include <vector>

int compute_788() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
