// Auto-generated module | 2026-05-12T21:33:18.737571
#include <iostream>
#include <vector>

int compute_279() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_279() << std::endl;
    return 0;
}
