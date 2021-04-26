// Auto-generated module | 2026-05-12T21:40:17.834919
#include <iostream>
#include <vector>

int compute_723() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
