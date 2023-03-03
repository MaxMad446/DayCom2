// Auto-generated module | 2026-05-13T20:32:02.528815
#include <iostream>
#include <vector>

int compute_322() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
