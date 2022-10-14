// Auto-generated module | 2026-05-11T21:22:51.505729
#include <iostream>
#include <vector>

int compute_463() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
