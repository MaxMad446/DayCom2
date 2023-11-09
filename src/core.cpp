// Auto-generated module | 2026-05-13T20:59:30.937090
#include <iostream>
#include <vector>

int compute_517() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_517() << std::endl;
    return 0;
}
