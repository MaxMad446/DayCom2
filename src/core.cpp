// Auto-generated module | 2026-05-13T22:09:49.431681
#include <iostream>
#include <vector>

int compute_790() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
