// Auto-generated module | 2026-05-12T20:38:33.676112
#include <iostream>
#include <vector>

int compute_186() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
