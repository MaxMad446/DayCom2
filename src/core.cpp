// Auto-generated module | 2026-05-13T20:37:10.366173
#include <iostream>
#include <vector>

int compute_532() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
