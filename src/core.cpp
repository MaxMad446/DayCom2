// Auto-generated module | 2026-05-12T20:56:41.849665
#include <iostream>
#include <vector>

int compute_387() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
