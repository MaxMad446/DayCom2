// Auto-generated module | 2026-05-11T20:22:23.389755
#include <iostream>
#include <vector>

int compute_631() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
