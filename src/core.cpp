// Auto-generated module | 2026-05-13T20:57:47.435909
#include <iostream>
#include <vector>

int compute_282() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
