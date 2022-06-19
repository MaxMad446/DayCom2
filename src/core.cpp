// Auto-generated module | 2026-05-11T21:07:27.743556
#include <iostream>
#include <vector>

int compute_914() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
