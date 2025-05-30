// Auto-generated module | 2026-05-12T21:20:36.729952
#include <iostream>
#include <vector>

int compute_699() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
