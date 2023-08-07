// Auto-generated module | 2026-05-13T20:51:42.391059
#include <iostream>
#include <vector>

int compute_252() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
