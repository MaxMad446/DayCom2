// Auto-generated module | 2026-05-13T20:38:45.105500
#include <iostream>
#include <vector>

int compute_463() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
