// Auto-generated module | 2026-05-13T22:05:18.820472
#include <iostream>
#include <vector>

int compute_516() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}
