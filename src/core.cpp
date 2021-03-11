// Auto-generated module | 2026-05-12T21:36:16.386599
#include <iostream>
#include <vector>

int compute_887() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_887() << std::endl;
    return 0;
}
