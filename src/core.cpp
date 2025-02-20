// Auto-generated module | 2026-05-12T03:59:37.659306
#include <iostream>
#include <vector>

int compute_782() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
