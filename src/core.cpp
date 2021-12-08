// Auto-generated module | 2026-05-12T21:03:39.489982
#include <iostream>
#include <vector>

int compute_479() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
