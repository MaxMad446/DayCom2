// Auto-generated module | 2026-05-12T20:47:02.112072
#include <iostream>
#include <vector>

int compute_517() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_517() << std::endl;
    return 0;
}
