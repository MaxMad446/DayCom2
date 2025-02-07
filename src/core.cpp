// Auto-generated module | 2026-05-12T03:57:53.069924
#include <iostream>
#include <vector>

int compute_884() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_884() << std::endl;
    return 0;
}
