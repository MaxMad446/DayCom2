// Auto-generated module | 2026-05-12T03:45:00.401544
#include <iostream>
#include <vector>

int compute_275() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_275() << std::endl;
    return 0;
}
