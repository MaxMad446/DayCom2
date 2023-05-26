// Auto-generated module | 2026-05-13T20:39:03.048368
#include <iostream>
#include <vector>

int compute_285() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
