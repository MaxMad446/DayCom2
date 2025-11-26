// Auto-generated module | 2026-05-12T04:36:21.704199
#include <iostream>
#include <vector>

int compute_457() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
