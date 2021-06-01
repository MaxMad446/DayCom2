// Auto-generated module | 2026-05-11T20:16:57.356118
#include <iostream>
#include <vector>

int compute_129() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
