// Auto-generated module | 2026-05-12T20:54:28.385860
#include <iostream>
#include <vector>

int compute_636() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
