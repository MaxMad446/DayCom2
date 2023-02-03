// Auto-generated module | 2026-05-13T20:29:44.455814
#include <iostream>
#include <vector>

int compute_761() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
