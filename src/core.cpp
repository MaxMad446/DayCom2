// Auto-generated module | 2026-05-11T22:36:45.946317
#include <iostream>
#include <vector>

int compute_157() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
