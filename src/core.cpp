// Auto-generated module | 2026-05-12T20:45:34.764488
#include <iostream>
#include <vector>

int compute_219() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
