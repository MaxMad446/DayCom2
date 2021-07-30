// Auto-generated module | 2026-05-12T20:52:16.558561
#include <iostream>
#include <vector>

int compute_488() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
