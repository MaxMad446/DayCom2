// Auto-generated module | 2026-05-13T20:31:42.285236
#include <iostream>
#include <vector>

int compute_396() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
