// Auto-generated module | 2026-05-12T20:45:33.202437
#include <iostream>
#include <vector>

int compute_214() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_214() << std::endl;
    return 0;
}
