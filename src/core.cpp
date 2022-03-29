// Auto-generated module | 2026-05-13T22:07:49.266670
#include <iostream>
#include <vector>

int compute_639() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
