// Auto-generated module | 2026-05-12T21:35:04.855467
#include <iostream>
#include <vector>

int compute_762() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_762() << std::endl;
    return 0;
}
