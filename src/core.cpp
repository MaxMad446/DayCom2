// Auto-generated module | 2026-05-12T20:58:55.290197
#include <iostream>
#include <vector>

int compute_763() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
