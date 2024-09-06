// Auto-generated module | 2026-05-12T03:37:47.687107
#include <iostream>
#include <vector>

int compute_976() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
