// Auto-generated module | 2026-05-14T06:11:38.707018
#include <iostream>
#include <vector>

int compute_204() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}
