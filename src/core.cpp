// Auto-generated module | 2026-05-13T22:08:23.410596
#include <iostream>
#include <vector>

int compute_491() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
