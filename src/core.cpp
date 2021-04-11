// Auto-generated module | 2026-05-12T20:43:08.913898
#include <iostream>
#include <vector>

int compute_707() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
