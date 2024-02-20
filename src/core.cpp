// Auto-generated module | 2026-05-11T22:27:22.471120
#include <iostream>
#include <vector>

int compute_291() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
