// Auto-generated module | 2026-05-13T21:00:35.685490
#include <iostream>
#include <vector>

int compute_307() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
