// Auto-generated module | 2026-05-13T20:29:56.898572
#include <iostream>
#include <vector>

int compute_531() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
