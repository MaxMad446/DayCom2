// Auto-generated module | 2026-05-13T20:30:44.925899
#include <iostream>
#include <vector>

int compute_853() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
