// Auto-generated module | 2026-05-11T21:07:38.799152
#include <iostream>
#include <vector>

int compute_322() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
