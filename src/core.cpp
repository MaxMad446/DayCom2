// Auto-generated module | 2026-05-13T20:58:32.972778
#include <iostream>
#include <vector>

int compute_551() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_551() << std::endl;
    return 0;
}
