// Auto-generated module | 2026-05-12T03:57:02.803316
#include <iostream>
#include <vector>

int compute_658() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
