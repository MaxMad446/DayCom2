// Auto-generated module | 2026-05-12T20:00:50.045766
#include <iostream>
#include <vector>

int compute_538() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
