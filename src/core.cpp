// Auto-generated module | 2026-05-13T20:46:25.326362
#include <iostream>
#include <vector>

int compute_389() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
