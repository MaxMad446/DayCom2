// Auto-generated module | 2026-05-13T20:35:24.388119
#include <iostream>
#include <vector>

int compute_194() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
