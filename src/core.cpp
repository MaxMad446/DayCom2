// Auto-generated module | 2026-05-14T06:18:34.559658
#include <iostream>
#include <vector>

int compute_251() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
