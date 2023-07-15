// Auto-generated module | 2026-05-11T21:58:33.329121
#include <iostream>
#include <vector>

int compute_316() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
