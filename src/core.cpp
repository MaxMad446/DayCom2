// Auto-generated module | 2026-05-12T21:24:37.437414
#include <iostream>
#include <vector>

int compute_920() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
