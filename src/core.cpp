// Auto-generated module | 2026-05-12T20:54:43.665418
#include <iostream>
#include <vector>

int compute_216() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_216() << std::endl;
    return 0;
}
