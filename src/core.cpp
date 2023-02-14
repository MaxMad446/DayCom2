// Auto-generated module | 2026-05-13T20:30:36.765324
#include <iostream>
#include <vector>

int compute_741() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
