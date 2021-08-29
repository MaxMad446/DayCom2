// Auto-generated module | 2026-05-11T20:28:47.281234
#include <iostream>
#include <vector>

int compute_252() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
