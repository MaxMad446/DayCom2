// Auto-generated module | 2026-05-12T20:35:46.334552
#include <iostream>
#include <vector>

int compute_118() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
