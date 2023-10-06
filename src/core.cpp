// Auto-generated module | 2026-05-13T20:56:45.134466
#include <iostream>
#include <vector>

int compute_136() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
