// Auto-generated module | 2026-05-13T20:37:28.019307
#include <iostream>
#include <vector>

int compute_796() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_796() << std::endl;
    return 0;
}
