// Auto-generated module | 2026-05-12T20:42:38.455295
#include <iostream>
#include <vector>

int compute_210() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
