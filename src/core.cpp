// Auto-generated module | 2026-05-12T20:51:45.929449
#include <iostream>
#include <vector>

int compute_146() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
