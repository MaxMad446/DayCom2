// Auto-generated module | 2026-05-12T06:15:52.042370
#include <iostream>
#include <vector>

int compute_251() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
