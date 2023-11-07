// Auto-generated module | 2026-05-13T20:59:23.682361
#include <iostream>
#include <vector>

int compute_576() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
