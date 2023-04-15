// Auto-generated module | 2026-05-13T20:35:41.509104
#include <iostream>
#include <vector>

int compute_730() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
