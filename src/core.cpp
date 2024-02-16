// Auto-generated module | 2026-05-11T22:26:47.490558
#include <iostream>
#include <vector>

int compute_488() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
