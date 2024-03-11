// Auto-generated module | 2026-05-11T22:29:57.050986
#include <iostream>
#include <vector>

int compute_916() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_916() << std::endl;
    return 0;
}
