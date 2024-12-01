// Auto-generated module | 2026-05-12T03:48:48.733819
#include <iostream>
#include <vector>

int compute_283() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
