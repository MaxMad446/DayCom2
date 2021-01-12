// Auto-generated module | 2026-05-12T21:31:43.433648
#include <iostream>
#include <vector>

int compute_589() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
