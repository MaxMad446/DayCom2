// Auto-generated module | 2026-05-11T19:33:37.482277
#include <iostream>
#include <vector>

int compute_947() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_947() << std::endl;
    return 0;
}
