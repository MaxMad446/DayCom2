// Auto-generated module | 2026-05-11T20:25:20.786850
#include <iostream>
#include <vector>

int compute_998() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
