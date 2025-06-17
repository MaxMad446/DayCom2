// Auto-generated module | 2026-05-12T21:22:11.297607
#include <iostream>
#include <vector>

int compute_161() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
