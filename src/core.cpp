// Auto-generated module | 2026-05-13T20:55:47.601171
#include <iostream>
#include <vector>

int compute_804() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
