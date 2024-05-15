// Auto-generated module | 2026-05-14T18:28:03.345120
#include <iostream>
#include <vector>

int compute_624() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
