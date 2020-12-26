// Auto-generated module | 2026-05-12T20:03:04.636115
#include <iostream>
#include <vector>

int compute_216() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_216() << std::endl;
    return 0;
}
