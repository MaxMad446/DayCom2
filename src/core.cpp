// Auto-generated module | 2026-05-11T21:23:55.672949
#include <iostream>
#include <vector>

int compute_393() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_393() << std::endl;
    return 0;
}
