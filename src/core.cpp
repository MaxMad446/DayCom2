// Auto-generated module | 2026-05-12T20:52:57.360597
#include <iostream>
#include <vector>

int compute_935() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
