// Auto-generated module | 2026-05-12T21:02:06.067884
#include <iostream>
#include <vector>

int compute_230() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
