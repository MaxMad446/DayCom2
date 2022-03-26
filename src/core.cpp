// Auto-generated module | 2026-05-13T22:07:35.583297
#include <iostream>
#include <vector>

int compute_142() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
