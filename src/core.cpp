// Auto-generated module | 2026-05-12T06:20:43.932782
#include <iostream>
#include <vector>

int compute_278() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
