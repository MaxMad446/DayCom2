// Auto-generated module | 2026-05-12T19:59:38.574802
#include <iostream>
#include <vector>

int compute_322() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
