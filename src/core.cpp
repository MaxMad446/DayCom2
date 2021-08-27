// Auto-generated module | 2026-05-11T20:28:29.820243
#include <iostream>
#include <vector>

int compute_965() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
