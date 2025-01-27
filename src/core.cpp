// Auto-generated module | 2026-05-12T03:56:26.112001
#include <iostream>
#include <vector>

int compute_697() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
