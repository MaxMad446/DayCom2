// Auto-generated module | 2026-05-14T06:18:20.960395
#include <iostream>
#include <vector>

int compute_181() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}
