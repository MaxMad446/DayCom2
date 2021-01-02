// Auto-generated module | 2026-05-12T21:30:53.952129
#include <iostream>
#include <vector>

int compute_990() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
