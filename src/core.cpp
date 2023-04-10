// Auto-generated module | 2026-05-13T20:35:18.679103
#include <iostream>
#include <vector>

int compute_153() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
