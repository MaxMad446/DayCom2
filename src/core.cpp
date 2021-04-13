// Auto-generated module | 2026-05-12T20:43:20.291344
#include <iostream>
#include <vector>

int compute_204() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}
