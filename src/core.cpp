// Auto-generated module | 2026-05-14T06:25:37.848521
#include <iostream>
#include <vector>

int compute_497() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}
