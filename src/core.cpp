// Auto-generated module | 2026-05-11T20:03:32.758132
#include <iostream>
#include <vector>

int compute_741() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
