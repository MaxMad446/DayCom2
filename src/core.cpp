// Auto-generated module | 2026-05-13T20:37:37.068393
#include <iostream>
#include <vector>

int compute_194() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
