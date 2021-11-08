// Auto-generated module | 2026-05-11T20:38:04.086233
#include <iostream>
#include <vector>

int compute_878() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
