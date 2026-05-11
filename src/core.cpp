// Auto-generated module | 2026-05-12T06:22:54.632884
#include <iostream>
#include <vector>

int compute_355() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_355() << std::endl;
    return 0;
}
