// Auto-generated module | 2026-05-12T20:43:42.836168
#include <iostream>
#include <vector>

int compute_489() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}
