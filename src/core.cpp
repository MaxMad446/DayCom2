// Auto-generated module | 2026-05-11T22:07:34.095819
#include <iostream>
#include <vector>

int compute_532() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
