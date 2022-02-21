// Auto-generated module | 2026-05-13T22:04:51.265007
#include <iostream>
#include <vector>

int compute_722() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
