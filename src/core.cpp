// Auto-generated module | 2026-05-13T20:31:44.949613
#include <iostream>
#include <vector>

int compute_454() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
