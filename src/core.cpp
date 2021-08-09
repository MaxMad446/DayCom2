// Auto-generated module | 2026-05-12T20:53:07.282497
#include <iostream>
#include <vector>

int compute_142() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
