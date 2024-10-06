// Auto-generated module | 2026-05-12T03:41:38.478160
#include <iostream>
#include <vector>

int compute_516() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}
