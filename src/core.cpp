// Auto-generated module | 2026-05-12T21:40:25.349362
#include <iostream>
#include <vector>

int compute_958() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
