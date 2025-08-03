// Auto-generated module | 2026-05-12T21:26:24.082639
#include <iostream>
#include <vector>

int compute_949() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
