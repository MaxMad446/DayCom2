// Auto-generated module | 2026-05-11T20:26:27.954772
#include <iostream>
#include <vector>

int compute_517() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_517() << std::endl;
    return 0;
}
