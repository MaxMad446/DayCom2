// Auto-generated module | 2026-05-12T21:02:48.790991
#include <iostream>
#include <vector>

int compute_803() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_803() << std::endl;
    return 0;
}
