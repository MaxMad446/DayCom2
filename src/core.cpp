// Auto-generated module | 2026-05-12T21:02:13.489661
#include <iostream>
#include <vector>

int compute_699() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
