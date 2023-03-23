// Auto-generated module | 2026-05-13T20:33:50.647229
#include <iostream>
#include <vector>

int compute_699() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
