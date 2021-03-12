// Auto-generated module | 2026-05-12T20:40:46.500344
#include <iostream>
#include <vector>

int compute_177() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_177() << std::endl;
    return 0;
}
