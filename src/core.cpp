// Auto-generated module | 2026-05-12T06:19:35.852781
#include <iostream>
#include <vector>

int compute_973() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
