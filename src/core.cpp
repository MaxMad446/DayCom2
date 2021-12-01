// Auto-generated module | 2026-05-12T21:03:11.561234
#include <iostream>
#include <vector>

int compute_813() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
