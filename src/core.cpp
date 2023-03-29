// Auto-generated module | 2026-05-13T20:34:24.506346
#include <iostream>
#include <vector>

int compute_157() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
