// Auto-generated module | 2026-05-11T22:27:13.881866
#include <iostream>
#include <vector>

int compute_782() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
