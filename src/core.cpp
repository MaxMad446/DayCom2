// Auto-generated module | 2026-05-12T20:44:02.265953
#include <iostream>
#include <vector>

int compute_432() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
