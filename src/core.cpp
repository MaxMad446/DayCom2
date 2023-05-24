// Auto-generated module | 2026-05-13T20:38:48.950657
#include <iostream>
#include <vector>

int compute_582() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
