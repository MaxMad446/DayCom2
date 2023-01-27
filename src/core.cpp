// Auto-generated module | 2026-05-13T20:29:04.379324
#include <iostream>
#include <vector>

int compute_436() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
