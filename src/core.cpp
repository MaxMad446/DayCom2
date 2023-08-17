// Auto-generated module | 2026-05-13T20:52:28.601994
#include <iostream>
#include <vector>

int compute_161() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
