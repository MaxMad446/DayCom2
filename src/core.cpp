// Auto-generated module | 2026-05-13T21:01:20.042977
#include <iostream>
#include <vector>

int compute_813() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
