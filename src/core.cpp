// Auto-generated module | 2026-05-11T21:44:22.441132
#include <iostream>
#include <vector>

int compute_234() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_234() << std::endl;
    return 0;
}
