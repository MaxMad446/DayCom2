// Auto-generated module | 2026-05-12T20:41:42.535354
#include <iostream>
#include <vector>

int compute_176() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
