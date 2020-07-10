// Auto-generated module | 2026-05-11T19:34:28.448917
#include <iostream>
#include <vector>

int compute_394() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
