// Auto-generated module | 2026-05-13T20:33:33.906064
#include <iostream>
#include <vector>

int compute_761() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
