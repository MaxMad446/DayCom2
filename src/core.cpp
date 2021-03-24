// Auto-generated module | 2026-05-12T21:37:17.200288
#include <iostream>
#include <vector>

int compute_962() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
