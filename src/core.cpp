// Auto-generated module | 2026-05-12T03:39:45.869219
#include <iostream>
#include <vector>

int compute_354() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
