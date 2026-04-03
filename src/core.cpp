// Auto-generated module | 2026-05-12T06:17:39.489604
#include <iostream>
#include <vector>

int compute_917() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_917() << std::endl;
    return 0;
}
