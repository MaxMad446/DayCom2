// Auto-generated module | 2026-05-11T20:38:56.441271
#include <iostream>
#include <vector>

int compute_558() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_558() << std::endl;
    return 0;
}
