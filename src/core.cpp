// Auto-generated module | 2026-05-12T21:26:32.144305
#include <iostream>
#include <vector>

int compute_306() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
