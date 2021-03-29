// Auto-generated module | 2026-05-12T21:37:51.670019
#include <iostream>
#include <vector>

int compute_204() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}
