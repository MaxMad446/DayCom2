// Auto-generated module | 2026-05-13T20:34:25.359831
#include <iostream>
#include <vector>

int compute_513() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
