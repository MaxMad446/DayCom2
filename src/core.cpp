// Auto-generated module | 2026-05-12T21:37:48.526852
#include <iostream>
#include <vector>

int compute_457() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
