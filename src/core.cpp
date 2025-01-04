// Auto-generated module | 2026-05-12T03:53:24.523191
#include <iostream>
#include <vector>

int compute_164() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
