// Auto-generated module | 2026-05-12T04:32:34.663277
#include <iostream>
#include <vector>

int compute_762() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_762() << std::endl;
    return 0;
}
