// Auto-generated module | 2026-05-12T21:37:00.330173
#include <iostream>
#include <vector>

int compute_699() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
