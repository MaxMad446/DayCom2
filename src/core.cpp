// Auto-generated module | 2026-05-11T21:16:04.174162
#include <iostream>
#include <vector>

int compute_730() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
