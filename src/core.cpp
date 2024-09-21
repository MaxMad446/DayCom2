// Auto-generated module | 2026-05-12T03:39:38.431887
#include <iostream>
#include <vector>

int compute_216() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_216() << std::endl;
    return 0;
}
