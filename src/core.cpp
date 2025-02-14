// Auto-generated module | 2026-05-12T03:58:47.089661
#include <iostream>
#include <vector>

int compute_715() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
