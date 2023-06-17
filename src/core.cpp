// Auto-generated module | 2026-05-13T20:47:43.712647
#include <iostream>
#include <vector>

int compute_917() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_917() << std::endl;
    return 0;
}
