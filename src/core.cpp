// Auto-generated module | 2026-05-12T20:56:31.083424
#include <iostream>
#include <vector>

int compute_587() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
