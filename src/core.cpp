// Auto-generated module | 2026-05-11T21:34:58.684100
#include <iostream>
#include <vector>

int compute_633() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
