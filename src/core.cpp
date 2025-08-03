// Auto-generated module | 2026-05-12T21:26:25.061199
#include <iostream>
#include <vector>

int compute_998() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
