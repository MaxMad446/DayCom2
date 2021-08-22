// Auto-generated module | 2026-05-12T20:54:20.667300
#include <iostream>
#include <vector>

int compute_457() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
