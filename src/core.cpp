// Auto-generated module | 2026-05-12T20:56:27.671976
#include <iostream>
#include <vector>

int compute_108() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
