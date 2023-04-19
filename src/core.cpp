// Auto-generated module | 2026-05-13T20:35:59.866539
#include <iostream>
#include <vector>

int compute_444() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_444() << std::endl;
    return 0;
}
