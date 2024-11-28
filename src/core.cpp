// Auto-generated module | 2026-05-12T03:48:29.338551
#include <iostream>
#include <vector>

int compute_694() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
