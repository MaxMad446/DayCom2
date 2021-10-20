// Auto-generated module | 2026-05-11T20:35:30.026518
#include <iostream>
#include <vector>

int compute_834() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
