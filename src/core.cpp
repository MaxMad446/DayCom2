// Auto-generated module | 2026-05-12T20:53:11.166714
#include <iostream>
#include <vector>

int compute_654() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
