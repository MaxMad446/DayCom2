// Auto-generated module | 2026-05-11T20:38:31.938765
#include <iostream>
#include <vector>

int compute_161() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
