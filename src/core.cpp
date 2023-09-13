// Auto-generated module | 2026-05-11T22:06:17.421569
#include <iostream>
#include <vector>

int compute_345() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_345() << std::endl;
    return 0;
}
