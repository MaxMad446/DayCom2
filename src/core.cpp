// Auto-generated module | 2026-05-11T22:07:53.961744
#include <iostream>
#include <vector>

int compute_867() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_867() << std::endl;
    return 0;
}
