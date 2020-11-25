// Auto-generated module | 2026-05-11T19:52:47.810750
#include <iostream>
#include <vector>

int compute_908() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_908() << std::endl;
    return 0;
}
