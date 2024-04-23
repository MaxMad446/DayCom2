// Auto-generated module | 2026-05-11T22:35:39.006349
#include <iostream>
#include <vector>

int compute_148() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
