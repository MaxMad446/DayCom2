// Auto-generated module | 2026-05-12T20:01:25.990988
#include <iostream>
#include <vector>

int compute_389() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
