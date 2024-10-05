// Auto-generated module | 2026-05-12T03:41:31.849560
#include <iostream>
#include <vector>

int compute_885() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
