// Auto-generated module | 2026-05-12T03:47:40.858827
#include <iostream>
#include <vector>

int compute_516() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}
