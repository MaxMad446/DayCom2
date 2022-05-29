// Auto-generated module | 2026-05-11T21:04:34.082080
#include <iostream>
#include <vector>

int compute_164() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
