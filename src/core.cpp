// Auto-generated module | 2026-05-13T20:54:08.967476
#include <iostream>
#include <vector>

int compute_453() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
