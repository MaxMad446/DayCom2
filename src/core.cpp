// Auto-generated module | 2026-05-13T20:55:35.482330
#include <iostream>
#include <vector>

int compute_567() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
