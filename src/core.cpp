// Auto-generated module | 2026-05-11T20:21:24.612876
#include <iostream>
#include <vector>

int compute_638() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
