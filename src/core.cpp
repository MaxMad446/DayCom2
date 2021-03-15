// Auto-generated module | 2026-05-12T21:36:39.032594
#include <iostream>
#include <vector>

int compute_620() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
